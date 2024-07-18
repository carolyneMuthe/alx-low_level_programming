char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;
    while (n-- && (*d++ = *src++));
    while (n-- > 0)
        *d++ = '\0';
    return dest;
}
