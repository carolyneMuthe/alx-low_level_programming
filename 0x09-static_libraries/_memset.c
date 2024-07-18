char *_memset
(char *s, char b, unsigned int n) 
{
    char *p = s;
    while (n--)
        *p++ = b;
    return s;
}
