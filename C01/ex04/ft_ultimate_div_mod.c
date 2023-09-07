/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/18 22:41:12 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/18 22:44:34 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;

	temp1 = *a % *b;
	*a = *a / *b;
	*b = temp1;
}

// int main(void)
// {
//    int a = 49;
//    int b = 6;
//    int *div = &a;
//    int *mod = &b;

//    ft_ultimate_div_mod(div, mod);

//    printf("%d %d", *div, *mod);
// }
