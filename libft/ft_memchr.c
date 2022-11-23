#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	printf("%d\n" ,c);
	if (!s || n < i)
		return(NULL);
	while (i < n && (char *)(s+i))
	{
		if (*(char*)(s+i) == c)
			return ((int*)(s + i));
		i++;
	}
	return (NULL);
}
