/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be used from src.
 *
 * This function appends the src string to the dest string,
 * using at most n bytes from src. If src contains n or more bytes,
 * it doesn't need to be null-terminated. The resulting string will be
 * null-terminated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i = 0;

    while (dest[dest_len] != '\0')
        dest_len++;

    while (src[i] != '\0' && i < n)
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    dest[dest_len] = '\0';

    return dest;
}
