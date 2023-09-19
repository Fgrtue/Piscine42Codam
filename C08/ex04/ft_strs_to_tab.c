#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char* create_str(char* av)
{
    int length = ft_strlen(av);
    int counter = 0;
    char* copy;

    copy = malloc(sizeof(char) * (length + 1));
    if (copy == NULL)
        return (NULL);
    while(counter < length)
    {
        copy[counter] = av[counter];
        counter++;
    }
    copy[counter] = '\0';
    return (copy);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int                 count;
    t_stock_str*        av_n;

    count = 0;
    av_n = malloc((sizeof(t_stock_str) * (ac + 1)));
    if (av_n == NULL)
        return (NULL);
    while (count < ac)
        {
            av_n[count].size = ft_strlen(av[count]);
            av_n[count].str = av[count];
            av_n[count].copy = create_str(av[count]);
            count++;
        }
    av_n[count].str = 0;
    return (av_n);
}

// int main(void)
// {
//     char **strs;
//     int size = 2;

//     strs = malloc(sizeof(char*) * size);

//     char str1[] = "Kirill";
//     char str2[] = "Loves";
//     // char str3[] = "Eating";
//     // char str4[] = "Croissants";

//     strs[0] = str1;
//     strs[1] = str2;
//     // strs[2] = str3; 
//     // strs[3] = str4;

//     ft_strs_to_tab(size, strs);

// //    printf("The strings in array is: %d", total_length(strs, size, sep));
//     return (0);
// }
