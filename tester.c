#include "ft_printf.h"
#include "stdio.h"
#include "unistd.h"

int	main(void)
{
	printf(" %d \n",printf("%p", LONG_MIN));
	printf(" %d \n",printf("%p", INT_MIN));
	printf(" %d \n",printf("%p", ULONG_MAX));
	printf(" %d \n",printf("%p", 0, 0));
	printf("\n");
	printf(" %d \n",ft_printf("%p", LONG_MIN));
	printf(" %d \n",ft_printf("%p", INT_MIN));
	printf(" %d \n",ft_printf("%p", ULONG_MAX));
	printf(" %d \n",ft_printf("%p", 0, 0));
}