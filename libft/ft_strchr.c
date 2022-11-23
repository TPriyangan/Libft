
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char*)(s+i));
		i++;
	}
	if (s[i] == c)
		return((char *)(s+i));
	return (NULL);
}

/*int	main(void)
{
	char	*tab;

	tab = "aebcfghijklmpqrstuvwxyez";
	printf("%p\n", ft_strchr(tab , 'e'));

	printf("%p\n", strchr(tab , 'e'));
}*/
