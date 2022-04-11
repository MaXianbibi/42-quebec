#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char *cs1;
	char *cs2;
	int i;

	cs1 = (char *)s1;
	cs2 = (char *)s2;

	if (cs2 == NULL)
		return (cs1);
	while (cs1++ && n-- > 0)
	{
		i = 0;
		if (*cs1 == cs2[i])
		{
			while (*cs1++ == cs2[i++] && n-- > 1)
			{
				if (i == ft_strlen(cs2))
					return (cs1 - ft_strlen(cs2));
			}
		}
	}
	return (NULL);
}

int main()
{
	char a[] = "salut a toi jeune banane";
	char b[] = "alut";

	printf("%s", ft_strnstr(a, b, 6));
}

