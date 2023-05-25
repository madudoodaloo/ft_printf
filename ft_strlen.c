#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i =-1;
	while (str[++i]);
	return (i);
}

/*#include <stdio.h>
int main(void)
{
	int n = ft_strlen("hello bitch\n");
	printf("%d", n);
}*/