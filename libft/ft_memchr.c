#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	printf("%d\n" ,c);
	while (i < n)
	{
		if (*(unsigned char*)(s+i) == (unsigned char)c)
			return ((unsigned int*)(s + i));
		i++;
	}
	return (NULL);
}
