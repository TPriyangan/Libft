#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return(0);
	while(i < n)
	{
		if (((char*)s1)[i] != ((char *)s2)[i])
		{
			return((int)(((char *)s2)[i] - ((char *)s1)[i]));
		}
		else
			i++;
	}
	return(0);
}

//int	main(void)
//{
//	char s[] = {-128, 0, 127, 0};
//	char sCpy[] = {-128, 0, 127, 0};
//	char s2[] = {0, 0, 127, 0};
//	char s3[] = {0, 0, 42, 0};

//	printf("%d ", ft_memcmp(s , sCpy, 4));
//	printf("%d\n", memcmp(s , sCpy, 4));
//	printf("%d ", ft_memcmp(s , s2, 0));
  //      printf("%d\n", memcmp(s , s2, 0));
//	printf("%d ", ft_memcmp(s , s2, 1));
  //      printf("%d\n", memcmp(s , s2, 1));
//	printf("%d ", ft_memcmp(s2 , s, 1));
 //     printf("%d\n", memcmp(s2 , s, 1));
//      printf("%d ", ft_memcmp(s2 , s3, 4));
//      printf("%d\n", memcmp(s2 , s3, 4));
//}
