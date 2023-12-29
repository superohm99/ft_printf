#include<stdio.h>
#include "ft_printf.h"

int	main() {
	int x = 100;
   	int *ptr = &x;
	int	count;
   	
	count = printf("The address is: %p, the value is %d", ptr, *ptr);
	printf("\n");
	printf("%d\n",count);
	count = ft_printf("The address is: %p, the value is %d", ptr, *ptr);
	printf("\n%d",count);
}
