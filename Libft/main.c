#include <stdio.h>
#include <stdlib.h>

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
char *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
int ft_split(char const *s, char c);
char *ft_itoa(int n);


int main()
{
  char *str;
  str = ft_itoa(2147483647);
  printf(str);
  free(str);
}