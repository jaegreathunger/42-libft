#include "libft.h"

/*
ft_putnbr_fd outputs the integer ’n’ to the given file descriptor.
*/
void    ft_putnbr_fd(int n, int fd)
{
    unsigned int	i;

	i = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = n * -1;
	}
	if (9 < i)
	{
		ft_putnbr_fd(i / 10, fd);
	}
	ft_putchar_fd(i % 10 + '0', fd);
}