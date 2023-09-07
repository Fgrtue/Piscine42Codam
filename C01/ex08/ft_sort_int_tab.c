/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/19 19:01:29 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/19 19:01:33 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *add1, int *add2)
{
	int	c;

	c = *add1;
	*add1 = *add2;
	*add2 = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*add1;
	int	*add2;
	int	*counter;

	add1 = tab;
	counter = (add1 + size - 1);
	while (add1 < counter)
	{
		add2 = add1;
		while (add2 <= counter)
		{
			if (*add1 > *add2)
			{
				ft_swap(add1, add2);
				add2 = add1;
			}
			else
			{
				add2++;
			}
		}
		add1++;
	}
}

// int main (void)
// {
// 	int arr[] = {5, 4, 3, 6, 8, 5, 3, 5};
// 	int *pnt = arr;
// 	int i;
// 	int size_variable;
// 	size_variable = *(&arr + 1) - arr;

// 	i = 0;

// 	ft_sort_int_tab(pnt, size_variable);
// 	while (i <= size_variable - 1)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
//   return (0);
// }
