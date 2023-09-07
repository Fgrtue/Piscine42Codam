/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 13:38:27 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/30 13:38:32 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

// int main(void)
// {
//    char arr[10] = "hellooo";

//     ft_putstr(arr);
// // printf("%d", ft_strlen(pnt));
//    return(0);
// }
