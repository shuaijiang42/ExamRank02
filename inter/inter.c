#include <unistd.h>

int ft_check_repeat(char *str, char c, int check_len)
{
	int i;

	i = 0;
	while (str[i] && (i < check_len || check_len == -1))
	{
		if  (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}


int main (int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 3)
	{
		while(argv[1][i])
		{
		   	if	((!ft_check_repeat(argv[1], argv[1][i], i)) && ft_check_repeat(argv[2], argv[1][i],-1))
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

