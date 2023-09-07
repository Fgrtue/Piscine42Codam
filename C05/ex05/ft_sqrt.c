/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 17:31:19 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/31 17:31:21 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	square_comp(int nb, int min, int max)
{
	if (min == max && min * min == nb)
		return (min);
	else if (min < max)
	{
		max = (min + max) / 2;
		min = nb / max;
		return (square_comp(nb, min, max));
	}
	else
		return (0);
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else
	{
		return (square_comp(nb, 1, nb));
	}
}

int main(void)
{
//    printf("The result of square function on 9 is %d\n", 
// ft_sqrt(9));
//    printf("The result of square function on 32 is %d\n", 
// ft_sqrt(32));
//    printf("The result of square function on 15129 is %d\n", 
// ft_sqrt(15129));
//    printf("The result of square function on 23970816 is %d\n", 
// ft_sqrt(23970816));
//    printf("The result of square function on 16777216 is %d\n", 
// ft_sqrt(16777216));
   printf("The result of square function on 2147483647 is %d\n", 
ft_sqrt(2147483647));
   return 0;
}