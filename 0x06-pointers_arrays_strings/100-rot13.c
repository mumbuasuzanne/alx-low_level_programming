/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @str: Pointer to the input string.
 *
 * This function applies the ROT13 cipher to the input string,
 * replacing each letter with the letter 13 positions ahead or behind it.
 * Non-letter characters are left unchanged.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr = str;
    int i;

    while (*ptr)
    {
        i = 0;

        while (lowercase[i])
        {
            if (*ptr == lowercase[i])
            {
                *ptr = lowercase[(i + 13) % 26];
                break;
            }
            i++;
        }

        i = 0;

        while (uppercase[i])
        {
            if (*ptr == uppercase[i])
            {
                *ptr = uppercase[(i + 13) % 26];
                break;
            }
            i++;
        }

        ptr++;
    }

    return str;
}
