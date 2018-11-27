#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c);
int ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main()
{
//	int tab[] = {1, 8,0, 0, 134384, 897, 4, 9};
//	char str[] = "bonjour";
	int n0 = ft_iterative_factorial(5);
	int	n1 = ft_recursive_factorial(0);
	int	n2 = ft_iterative_power(5, 5);
	int	n3 = ft_recursive_power(5, 5);
	int	n4 = ft_fibonacci(10);
	int n5 = ft_sqrt(169);
	int	n6 = ft_is_prime(1434258);
	int	n7 = ft_find_next_prime(36);
	printf("%d %d %d %d %d %d %d %d", n0, n1, n2, n3, n4, n5, n6, n7);
	return (0);
}
