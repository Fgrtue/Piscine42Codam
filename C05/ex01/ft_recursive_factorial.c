/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 17:22:24 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/30 17:22:25 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}

// int	main (void)
// {
// 	printf("%d",ft_recursive_factorial(5));
// 	return (0);
// }