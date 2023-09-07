/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/18 23:32:09 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/18 23:43:27 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

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
