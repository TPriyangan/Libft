#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ( n == 0 ) /*chelou*/
		return (0);/*chelou*/
	if (n < i || s1[i] == '\0' || s2[i]== '\0')
		return((unsigned char)s1[i] - (unsigned char)s2[i]);
	while (s1[i] && s2[i] && i <= n)
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i] && s1[i] && s2[i] && i != n - 1 )
			i++;
		else
			break;
	}
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}

/*int	main(void)
{
	char	*test1;
	char	*test2;

	test1 = "Jean va a la plage";
	test2 = "Jean va a la mare";
	printf("%d\n", ft_strncmp(test1, test2 ,140));
	printf("%d\n", strncmp(test1, test2 ,140));
}*/
