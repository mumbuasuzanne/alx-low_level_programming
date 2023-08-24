/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: Pointer to the input string.
 *
 * This function iterates through the input string and converts all lowercase
 * letters to their corresponding uppercase letters.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
        
		str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }

    return str;
}

