/**
 * infinite_add - Adds two numbers.
 * @n1: Pointer to the first number as a string.
 * @n2: Pointer to the second number as a string.
 * @r: Pointer to the buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * This function adds two positive numbers represented as strings and stores
 * the result in the provided buffer. It returns a pointer to the result.
 * If the result cannot be stored in the buffer, it returns 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len_n1 = 0, len_n2 = 0, carry = 0, sum = 0;
    int i, j, k;

    while (n1[len_n1] != '\0')
        len_n1++;
    while (n2[len_n2] != '\0')
        len_n2++;

    if (len_n1 >= size_r - 1 || len_n2 >= size_r - 1)
        return 0;

    i = len_n1 - 1;
    j = len_n2 - 1;
    k = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;

        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        carry = sum / 10;
        r[k] = (sum % 10) + '0';

        i--;
        j--;
        k++;
    }

    if (k >= size_r - 1)
        return 0;

    r[k] = '\0';

   
    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return r;
}

