/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 19:13:30 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/22 19:13:33 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || 'Z' < *str)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
//  char str[] = "ABCDEFG";
//  char str1[] = "aaaaa";
//   printf("Resutl for uppercase is %d\n", ft_str_is_uppercase(str));
// 	 printf("Resutl for lowercase is %d", ft_str_is_uppercase(str1));
//   return(0);
// }
