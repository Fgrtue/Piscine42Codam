/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 13:37:03 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/30 13:37:34 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
//    char a[] = "hellooo";
//    char *pnt;
//    pnt = a;
//   printf("%d", ft_strlen(pnt));
//    return(0);
// }
