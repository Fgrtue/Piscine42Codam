/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/18 23:32:09 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/18 23:34:34 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

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
//    char a[] = "hellohgkffghkoo";
//    char *pnt;

//    pnt = a;
//    ft_putstr(pnt);
//    return(0);
// }
