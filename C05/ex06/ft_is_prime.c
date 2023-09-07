/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 18:01:38 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/31 18:01:40 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

// int main(void)
// {
//     printf("The result of check_prime function on -1 is %d\n", 
// ft_is_prime(-1));
//     printf("The result of check_prime function on 0 is %d\n", 
// ft_is_prime(0));
//     printf("The result of check_prime function on 1 is %d\n", 
// ft_is_prime(1));
//     printf("The result of check_prime function on 5 is %d\n", 
// ft_is_prime(5));
//     printf("The result of check_prime function on 7 is %d\n", 
// ft_is_prime(7));
//     printf("The result of check_prime function on 9 is %d\n", 
// ft_is_prime(9));
//     printf("The result of check_prime function on 23 is %d\n", 
// ft_is_prime(23));
//   printf("The result of check_prime function on 32 is %d\n", 
// ft_is_prime(32));
//     printf("The result of check_prime function on 2147483647 is %d\n", 
// ft_is_prime(2147483647));
//    return 0;
// }
