/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 17:20:55 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/30 17:20:57 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			fact = fact * nb;
			nb--;
		}
		return (fact);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}

// int	main (void)
// {
// 	printf("%d", ft_iterative_factorial(0));
// 	return (0);
// }