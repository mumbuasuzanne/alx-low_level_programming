/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the input string.
 *
 * This function capitalizes the first letter of each word in the input string.
 * Words are separated by space, tabulation, new line, comma, semicolon, period,
 * exclamation mark, question mark, double quote, parentheses, or curly braces.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] = str[i] - ('a' - 'A');
    }

    i++;

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}')
        {
            i++;

            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - ('a' - 'A');
            }
        }
        else
        {
            i++;
        }
    }

    return str;
}
