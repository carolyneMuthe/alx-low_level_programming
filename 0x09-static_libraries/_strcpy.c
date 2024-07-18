char *_strcpy(char *dest, char *src)
{
    char *p = dest;
    while ((*p++ = *src++));
    return dest;
}
