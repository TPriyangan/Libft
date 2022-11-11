#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

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

	tab = "abcefghijklmpqrstuvwxyz";
	printf("%d\n", *ft_strchr(tab , 'e'));

	printf("%d\n", *strchr(tab , 'o'));
}
