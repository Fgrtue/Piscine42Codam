/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 19:16:39 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/22 19:16:41 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	char	*save;

	save = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (save);
}

// int main(void)
// {
//     char str[] = "-=&^*$";
// 	char str1[] = "abcdefg";

//     printf("Result for non-alpha %s\n", ft_strupcase(str));
// 	printf("Result for alpha %s", ft_strupcase(str1));
//     return(0);
// }
