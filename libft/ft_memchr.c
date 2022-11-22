#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char*)(s+i) == '\0')
			return (NULL);
		if (*(char*)(s+i) == c)
			return ((int*)(s + i));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*test;

	test = "";
	printf("%p\n" ,ft_memchr(test, 'J', 1));
	printf("%p\n" ,memchr(test, 'J', 1));
}
