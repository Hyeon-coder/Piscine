#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 0;
	while(i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
}
