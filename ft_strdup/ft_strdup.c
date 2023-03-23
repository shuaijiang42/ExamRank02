#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char *str;
	int i;

	i = 0;
	str = (char *)malloc((sizeof(char) * (ft_strlen(src) + 1)));
	if (!str)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

