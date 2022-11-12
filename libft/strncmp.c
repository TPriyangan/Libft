#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
		if (i == n)
		{
			i--;
			break;
		}
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	*test1;
	char	*test2;

	test1 = "Jean va a la plage";
	test2 = "Jean va a la mare";
	printf("%d\n", ft_strncmp(test1, test2 ,140));
	printf("%d\n", strncmp(test1, test2 ,140));
}
