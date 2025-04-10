#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return 0;
	if (nb < 2)
		return 1;
	if (nb == 2)
		return  2;
	else
		return nb * ft_recursive_factorial(nb - 1);
	
}

void	ft_putnbr(int n)
{
	char	c;
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	nb = 5;
	ft_putnbr(ft_recursive_factorial(nb));
	return (0);
}
