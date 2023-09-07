/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 17:28:49 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/31 17:28:51 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else 
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int main (void)
// {
//     printf("Fib1 is %d\n", ft_fibonacci(1));
//     printf("Fib2 is %d\n", ft_fibonacci(2));
//     printf("Fib3 is %d\n", ft_fibonacci(3));
//     printf("Fib4 is %d\n", ft_fibonacci(4));
//     printf("Fib5 is %d\n", ft_fibonacci(5));
//     printf("Fib6 is %d\n", ft_fibonacci(6));
// }
