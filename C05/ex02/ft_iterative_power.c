/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 17:23:50 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/30 17:23:53 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power >= 0)
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
	else
		return (0);
}

// int main (void)
// {
//     printf("%d", ft_iterative_power(4, 3));
//     return (0);
// }