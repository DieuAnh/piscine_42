/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 13:45:45 by thile             #+#    #+#             */
/*   Updated: 2018/07/16 18:09:33 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	print_grid(int **grid);
int		exist_unassigned_cell(int **grid, int *i, int *j);
int		is_num_safe_hor_and_ver(int **grid, int num, int i, int j);
int		is_num_safe_in_block(int **grid, int num, int i, int j);
int		is_num_safe(int **grid, int num, int i, int j);


int		solve_sudoku(int **grid)
{
	int i;
	int j;
	int num;

	num = 1;
	if (!exist_unassigned_cell(grid, &i, &j))
		return (1);
	while (num <= 9)
	{
		if (is_num_safe(grid, num, i, j))
		{
			grid[i][j] = num;
			if (solve_sudoku(grid))
				return (1);
			grid[i][j] = -2;
		}
		num++;
	}
	return (0);
}

void	allocate_memory(int ***grid)
{
	int i;

	i = 0;
	*grid = (int **)malloc(9 * sizeof(int *));
	while (i < 9)
	{
		(*grid)[i] = (int *)malloc(9 * sizeof(int));
		i++;
	}
}

int 	exist_error_len_input(char **argv)
{
	int i;
	int j;
	int k;
	int tab[9];

	i = 0;
	k = 0;
	while (i < 9)
	{
		tab[i] = 0;
		j = 0;
		while (argv[i + 1][j] != '\0')
		{
			tab[i]++;	
			j++;
		}
		i++;
	}
	while ( k < 9)
	{
		if (tab[k] != 9)
			return (1);
		k++;
	}
	return (0);
}

int 	exist_error(int **grid, int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc != 10)
		return (1);
	if (!solve_sudoku(grid))
		return (1);
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid[i][j] != '.' && ((grid[i][j] < '1' - 48) || (grid[i][j] > '9' - 48)))
				return (1);
			j++;
		}
		i++;
	}
	if (exist_error_len_input(argv))
		return (1);
	return (0);
}
void 	init_grid(int **grid, char **argv)
{	
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			grid[i][j] = argv[i + 1][j] - 48;
			j++;
		}
		i++;
	}
}
int		main(int argc, char **argv)
{
	int i;
	int **grid;

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);	
	}
	allocate_memory(&grid);
	init_grid(grid, argv);
	if (exist_error(grid, argc, argv))
		write(1, "Error\n", 6);
	else
		print_grid(grid);	
	i = 0;
	while ( i < 9)
	{
		free((grid)[i]);
		i++;
	}
	free(grid);
	return (0);
}
