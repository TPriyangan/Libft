#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((int*)(s1+i) && (int*)(s2+i) && i < n)
	{
		if ((char*)(s1+i) == (char*)(s2+i))
			i++;
		else
			break;
		/*{
			if (*(char*)(s1+i) < *(char*)(s2+i))
				return(-1);
			else
				return(1);
		}*/
	}
	return (*(char*)(s1+i) - *(char*)(s2+i));
}

int	main(void)
{
	char	*test1;
	char	*test2;

	test1 = "abcdefgh";
	test2 = "zbcdefgh";
	printf("%d\n", ft_memcmp(test1 , test2, 6));
	printf("%d\n", memcmp(test1 , test2, 6));
}
