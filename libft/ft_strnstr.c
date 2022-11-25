#include "libft.h"

/*char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i+j] && little[j] && j < len && big[i +j] == little[j])
			j++;
		if (little[j] == '\0' && little[j-1] == big[(j-1) +i])
			return((char*)(big + i));
		i++;
	}
	return(NULL);
}*/

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
        size_t  i;
        size_t  j;

        i = 0;
	if (little[i] == '\0')
		return ((char *)(big + i));
        while (i < len)
        {
                j = 0;
                while (((char *)big)[i +j] == ((char *)little)[j] && (i + j < len))
		{
			j++;
			if (little[j] == '\0')
				return((char *)(big + i));
		}
		i++;
        }
        return (NULL);
}

/*int	main(void)
{
	char	*botte_de_foin;
	char	*paille;

	botte_de_foin = "Jean va au bar avec Jacques";
	paille = "bar";
	printf("%s\n" , ft_strnstr(botte_de_foin, paille, 15));*/
	/*printf("%p\n" , strnstr(botte_de_foin, paille, 15));*/
/*}*/
