/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/18 22:12:46 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/18 22:40:42 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//In summary, the phrase describes a function that takes two input values,
//'a' and 'b', performs a division operation on them, 
//and then stores the resulting quotient in the memory location
// pointed to by the 'div' pointer, which is expected to be an integer pointer.
// This allows the calling code to retrieve the quotient later by accessing 
//the value at the memory location pointed to by 'div'.

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
//    int a = 49;
//    int b = 6;
//    int div;
//    int mod;

//    ft_div_mod(a, b, &div, &mod);
//    printf("%d, %d", div, mod);

//    return (0);
// }
