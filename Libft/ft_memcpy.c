void *ft_memcpy(void *dest, const void * src, unsigned long n)
{
	char *dest_cpy;
	const char *src_cpy;

	dest_cpy = dest;
	src_cpy = src;
	while (n-- > 0)
		*dest_cpy++ = *src_cpy++;
	return (dest);
}
