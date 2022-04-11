#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;

	if (0 > n)
	{
		ft_putchar_fd('-', fd);
		nbr = n * -1;
	}
	else
		nbr = n;
	if (n > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + 48, fd);
}