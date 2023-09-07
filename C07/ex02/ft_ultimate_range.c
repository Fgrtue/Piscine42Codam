/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 21:36:08 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/09/06 21:38:44 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//  The function takes pointer to pointer, since malloc()
//  returns the pointer to the place where it allocated memory
//  That is why to get the array with the range between min and max
//  iwe will assign the value of this new pointer (created by malloc)
//  to the value of our variable. To do this it requires 
//  to have a pointer to the
//  storage of this variable 

// GOOD Habit -- always check whether malloc was able to allocate memory

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min < max)
	{
		*range = malloc((max - min) * sizeof(int));
		i = 0;
		if (*range != NULL)
		{
			while (i < (max - min))
			{
				(*range)[i] = min + i;
				i++;
			}
		}
		return (i);
	}
	else
		return (-1);
}

int		ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (-1);
	if ((*range = (int *)malloc(sizeof(int) * (max - min))) == ((void *)0))
		return (-1);
	i = 0;
	while (min < max)
		*range[i++] = min++;
	return (i);
	return (0);
}

// int main(void)
// {
//     int *range;
//     int i = 0; 
//     printf("The range is: %d\n", ft_ultimate_range(&range, 1, 5));
//     while (i < ft_ultimate_range(&range, 1, 5))
//     {
//         printf("The value in range[%d] is: %d\n", i, range[i]);
//         i++;
//     }
//     return (0);
// }
