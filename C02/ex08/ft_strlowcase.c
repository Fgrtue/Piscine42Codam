/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 19:20:16 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/22 19:20:20 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	char	*save;

	save = str;
	while (*str)
	{
		if ('A' <= *str && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (save);
}

// int main(void)
// {
//     char str[] = "-=&^*$";
// 	char str1[] = "ABCDEF";

//     printf("Result for non-alpha %s\n", ft_strlowcase(str));
// 		printf("Result for alpha %s", ft_strlowcase(str1));
//     return(0);
// }
