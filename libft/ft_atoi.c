#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	retour;

	i = 0;
	signe = 1;
	retour = 0;
	while ((nptr[i] >= 9 &&  nptr[i] <= 13) || nptr[i] == 32) 
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			signe = signe * -signe;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		retour = retour *10  + nptr[i] - '0';
		i++;
	}
	return (retour * signe);
}

int	main(void)
{
	char	*test;

	test= "   568d75";
	printf("%d\n", ft_atoi(test));
	printf("%d\n", atoi(test));
}
