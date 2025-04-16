#include "ft_printf.h"
#include "stdio.h"
#include "unistd.h"

int	main(void)
{
	printf("%d \n",printf(" %p %p ", LONG_MIN, LONG_MAX));
	printf("%d \n",printf(" %p %p ", INT_MIN, INT_MAX));
	printf("%d \n",printf(" %p %p ", ULONG_MAX, -ULONG_MAX));
	printf("%d \n",printf(" %p %p ", 0, 0));
	printf("\n");
	printf(" %d \n",ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
	printf(" %d \n",ft_printf(" %p %p ", INT_MIN, INT_MAX));
	printf(" %d \n",ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX));
	printf(" %d \n",ft_printf(" %p %p ", 0, 0));
}