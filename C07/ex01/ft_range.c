/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 21:32:59 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/09/06 21:34:13 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*pt;
	int	i;

	if (min < max)
	{
		pt = malloc((max - min) * sizeof(int));
		i = 0;
		if (pt != NULL)
		{
			while (i < (max - min))
			{
				pt[i] = min + i;
				i++;
			}
		}
		return (pt);
	}
	else
		return ((void *)0);
}

// int main(void)
// {
//     int *pt = ft_range(5, 5);
//     int i = 0;

//     printf("The result of my function is %p", pt);

//     while (*pt)
//     {
//         printf("The value in buffer[%d] = %d\n", i, *pt);
//         pt++;
//         i++;
//     }
//     return (0);
// }
