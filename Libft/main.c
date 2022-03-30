#include <stdio.h>

void ft_bzero(void *s, unsigned long n);
int ft_strlcpy(char *dst, const char *src, unsigned long n);
int ft_strlcat(char *dst, const char *src, unsigned long n);
int ft_toupper(int ch);
int ft_tolower(int a);
char *ft_strchr(const char *str, int c);
int ft_strlen(char *str);
char *ft_strrchr(const char *str, int c);
int ft_strncmp ( const char * str1, const char * str2, unsigned long num );
int ft_atoi(const char *str);


int main()
{
  printf("%d", ft_atoi("        \r    \t   -12345"));
}