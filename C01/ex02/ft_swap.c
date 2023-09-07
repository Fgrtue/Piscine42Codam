/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/18 22:35:41 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/18 22:39:09 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int main(void)
// {
//   int i1;
//    int i2;
//    int *pnt1;
//    int *pnt2;

//    i1 = 40;
//    i2 = 50;

//    pnt1 = &i1;
//    pnt2 = &i2;

//    printf("%d %d ", i1, i2);

//    ft_swap(pnt1, pnt2);

//    printf("%d %d", i1, i2);
// }
