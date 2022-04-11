#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *cs;
	int i;

	if (!s || !f)
		return (NULL);
	cs = malloc(sizeof(char) * ft_strlen((char*)s));
	i = 0;
	while (s[i] != '\0')
	{
		cs[i] = f(i, s[i]);
		i++;
	}
	cs[i] = '\0';
	return (cs);
}