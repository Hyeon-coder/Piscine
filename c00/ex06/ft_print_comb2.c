#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int i)
{
	if (i <= 9)
	{
		ft_putchar(0 + '0');
		ft_putchar(i + '0');
		ft_putchar(' ');
		ft_putchar(0 + '0');
		ft_putchar(i + '0');
	}
	else
	{
		ft_putchar(i / 10 + '0');
		ft_putchar(i % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			display(a);
			ft_putchar(' ');
			display(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main()
{
	ft_print_comb2();
	return 0;
}
