/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 19:15:05 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/22 19:15:08 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("Printable %d\n", ft_str_is_printable("ABDELKFSCO?I340990%"));
// 	printf("Non Printable %d", ft_str_is_printable("\n\t\v\f"));
// 	return (0);
// }
