#include "ft_printf.h"

int	ft_putnbr(long nbr)
{
	long int	nb;
	int			counter;

	counter = 0;
	nb = nbr;
	if (nb < 0)
	{
		counter += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		counter += ft_putnbr(nb / 10) + ft_putnbr(nb % 10);
	else
		counter += ft_putchar(nb + 48);
	return (counter);
}

/*int main(void)
{
	int n = ft_putnbr(-214);
	printf("\n %d\n", n);
}*/