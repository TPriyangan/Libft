#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ( s1[i] || s2[i])
	{
		if ((s1[i] == s2[i]))
			i++;
		else
			break;
	}
	return (s1[i]- s2[i]);
}

int	main(void)
{
	char	*test1;
	char	*test2;

	test1 = "Jean et Jacques vont a la piscine";
	test2 = "Jean et Jacques vont a la piscine";

	printf("%d\n", ft_strcmp(test1 ,test2));
	printf("%d\n", strcmp(test1 ,test2));
}
