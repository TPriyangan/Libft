#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*return_value;

	i = 0;
	return_value = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return_value = (char*)&(s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return_value = (char*)(s+i);
	return(return_value);
}

/*int	main(void)
{
	char	*test;
	test = "jeanjeanjeanjeanjacques";
	int i;
	i = 0;
	char c = 'j';
	char*r = "c";

	while (test[i] != '\0')
	{
		if (test[i] == c)
			r = (char *)&(test[i]);
		i++;
	}
	printf("%s\n", r);

	printf("%p\n", ft_strrchr(test , 'n'));
	printf("%s\n", ft_strrchr(test , 'n'));
	printf("%p\n", strrchr(test , 'n'));
	printf("%s\n", strrchr(test , 'n'));
}*/
