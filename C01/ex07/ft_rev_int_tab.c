/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/18 23:32:09 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/19 17:40:58 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;

	while (--size >= 0)
	{
		temp = *tab;
		*tab = *(tab + size);
		*(tab + size) = temp;
		tab++;
		size--;
	}
}

// int main(void)
// {
// 	int arr[] = {1,2,3,4,5,6,7,8};
//  	int *pnt;
//  	int i = 0;
// 	int size_variable;

//  	size_variable = *(&arr + 1) - arr;

//    	pnt = arr;
// 	ft_rev_int_tab(pnt, size_variable);
// 	while (i <= size_variable - 1)
//   	{
//    		printf("%d", arr[i]);
//    		i++;
//   	}

//    return(0);
// }
