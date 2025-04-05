#include <stdio.h>
#include <unistd.h>

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

int main()
{
	int *i;

	*i = 0;
	printf("%p \n", i);
	printf("%ul \n", i);
	printf("%X \n", 158);
	ft_putnbr_hex_fd((unsigned long)i);
	return 0;
}