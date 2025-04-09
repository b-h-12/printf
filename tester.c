#include <stdio.h>
#include <unistd.h>

#include "ft_printf.h"

void	ft_putnbr_hex_fd(unsigned long nbr)
{
	int		i;
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_putnbr_hex_fd(nbr / 16);
		ft_putnbr_hex_fd(nbr % 16);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}


int main()
{
	unsigned int test;
	
	test = 5999;
	ft_putnbr_fd(test, 1);

	return 0;
}