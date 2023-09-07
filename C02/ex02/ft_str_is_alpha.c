/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 19:08:47 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/22 19:08:55 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 'A' || ('Z' < *str && *str < 'a') || 'z' < *str)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
//    char str[] = "";
//    char str1[] = "Non_Alpha";
//    char str2[] = "Alpha";
//    printf("%d", ft_str_is_alpha(str));
//    printf("%d", ft_str_is_alpha(str1));
//    printf("%d", ft_str_is_alpha(str2));
//    return(0);
// }
