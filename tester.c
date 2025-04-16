#include "unistd.h"
#include "stdio.h"

void	ft_putnbr_hex_maj(unsigned long nbr)
{
	int		i;
	char	*base;

	base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_putnbr_hex_maj(nbr / 16);
		ft_putnbr_hex_maj(nbr % 16);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}

int main()
{
	int *p;
	*p = 6;
	ft_putnbr_hex_maj(-512);
	printf("\n %X", -512);
	return 0;
}