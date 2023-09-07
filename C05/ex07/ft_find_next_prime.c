/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 18:06:35 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/31 18:06:37 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else
	{
		while (6 * i - 1 <= (nb / 2)
			&& 6 * i + 1 <= (nb / 2))
		{
			if (nb % (6 * i - 1) == 0 || nb % (6 * i + 1) == 0 \
			|| nb % 2 == 0 || nb % 3 == 0)
			{
				return (0);
			}
			else
				i++;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else
	{
		while (ft_is_prime(nb) != 1)
		{
			nb++;
		}
		return (nb);
	}
}

// int main ()
// {
// printf("The the next prime number after -1 is %d\n", 
// ft_find_next_prime(436273010));
// printf("The the next prime number after 2 is %d\n", 
// ft_find_next_prime(2));
// printf("The the next prime number after 3 is %d\n", 
// ft_find_next_prime(3));
// printf("The the next prime number after 4 is %d\n", 
// ft_find_next_prime(4));
// printf("The the next prime number after 32 is %d\n", 
// ft_find_next_prime(32));
// printf("The the next prime number after 37 is %d\n", 
// ft_find_next_prime(37));
// printf("The the next prime number after 68 is %d\n", 
// ft_find_next_prime(68));
// printf("The the next prime number after 82 is %d\n", 
// ft_find_next_prime(82));
// printf("The the next prime number after 2147483647 is %d\n", 
// ft_find_next_prime(2147483647));
// return 0;
// }