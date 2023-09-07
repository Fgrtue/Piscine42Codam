/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 19:10:38 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/22 19:10:41 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < 48 || 57 < *str)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
//   char str[] = "abcdfg";
//   char str1[] = "12345";

//    printf("Result for non-numeric %d\n", ft_str_is_numeric(str));
//    printf("Result for numeric %d", ft_str_is_numeric(str1));
//    return(0);
// }
