/**
 * _strncpy - Copies a string, up to n bytes from src.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be copied from src.
 *
 * This function copies up to n bytes from the src string into the dest buffer.
 * If src contains n or more bytes, dest is not null-terminated.
 * If src is shorter than n bytes, the remaining bytes in dest are filled with null bytes.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}
