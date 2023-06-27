#include "libft.h"

/*
it str1 is less than str2, retturns -value
if str1 is greater than str2, returns +value
if same, returns 0.
*/
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if ((str1[i] - str2[i]) != 0)
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

// int main(void)
// {
//     int result = strncmp("AsDFFF", "ASDFFF", 5);
//     int result2 = ft_strncmp("AsDFFF", "ASDFFF", 5);
//     printf("%d, %d", result, result2);
// }