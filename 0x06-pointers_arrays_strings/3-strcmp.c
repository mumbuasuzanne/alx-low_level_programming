/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * This function compares the strings s1 and s2. It returns an integer less than,
 * equal to, or greater than zero if s1 is found, respectively, to be less than,
 * to match, or be greater than s2.
 *
 * Return: Negative value if s1 < s2, 0 if s1 == s2, positive value if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}

