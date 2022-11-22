#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char*)(s+i));
		i++;
	}
	return ((char*)(s+i));
}

int	main(void)
{
	char	*tab;

	tab = "aebcfghijklmpqrstuvwxyez";
	printf("%p\n", ft_strchr(tab , 'e'));

	printf("%p\n", strchr(tab , 'e'));
}
