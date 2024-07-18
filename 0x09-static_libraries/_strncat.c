char *_strncat(char *dest, char *src, int n)
{
	 char *d = dest;
    while (*d)
        d++;
    while (n-- && (*d++ = *src++));
    if (n < 0)
        *d = '\0';
    return dest;
}
