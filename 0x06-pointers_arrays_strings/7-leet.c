/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 *
 * This function replaces specific letters in the input string with their
 * corresponding 1337 replacements based on the provided rules.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
    char leet_dict[] = "AEOTL";
    char leet_replacements[] = "43071";
    int i, j;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (leet_dict[j] != '\0')
        {
            if (str[i] == leet_dict[j] || str[i] == leet_dict[j] + 32)
            {
                str[i] = leet_replacements[j];
                break;
            }
            j++;
        }
        i++;
    }

    return str;
}

