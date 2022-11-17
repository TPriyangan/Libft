#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int	ft_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (strchr(set, s1[i]))
			i++;
		else
			break;
	}
	return (i);
}

int     ft_end(char const *s1, char const *set,int deb, int n)
{	        
	        while (n > deb)
		{
			if (strchr(set, s1[n]))
				n--;
			else
				break;
		}
		return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*s2;
	int	start;
	int	end;
	int	j;

	while (*s1)
	{
		start = ft_start(s1, set);
		i = strlen(s1);
		end = ft_end(s1, set, start, i);
		s2 = (char *)malloc((end - start + 2) * sizeof(char));
		if (s2 == NULL)
			return (NULL);
		j = 0;
		while (j != (end - start + 1))
		{
			s2[j] = s1[start + j];
			j++;
		}
		s2[j] = '\0';
		return (s2);
	}
	return (NULL);
}

int     main(void)
{
	char    *phrase;
	char    *trimmeur;
        char    *receptacle;
	phrase = "tromtriiiittttttrim";
	trimmeur = "matdgsgzarien";
	receptacle = ft_strtrim(phrase, trimmeur);
	printf("%s\n", receptacle);
}
