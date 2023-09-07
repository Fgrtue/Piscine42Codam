/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 15:56:37 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/30 15:56:42 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' 
			|| base[i] < '!' || base[i] > '~')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] - base[j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	if (i > 1)
		return (1);
	else
		return (0);
}

int	len_new_base(int nbr, int size_base)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= size_base;
		len++;
	}
	return (len);
}

void	condition(int nbr, char *base, int *re_ne_cou)
{
	char	ch;
	char	rev_numb[100];

	if (nbr < 0)
	{
		ch = '-';
		write(1, &ch, 1);
		nbr = -nbr;
	}
	while (re_ne_cou[2] < re_ne_cou[1])
	{
		re_ne_cou[0] = nbr % ft_strlen(base);
		rev_numb[re_ne_cou[2]] = base[re_ne_cou[0]];
		nbr /= ft_strlen(base);
		re_ne_cou[2]++;
	}
	while (--re_ne_cou[1] >= 0)
	{
		ch = rev_numb[re_ne_cou[1]];
		write(1, &ch, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	rest;
	int	new_numb_len;
	int	counter;
	int	re_ne_cou[3];

	rest = 0;
	counter = 0;
	if (check_base(base) != 0)
	{
		new_numb_len = len_new_base(nbr, ft_strlen(base));
		re_ne_cou[0] = rest;
		re_ne_cou[1] = new_numb_len;
		re_ne_cou[2] = counter;
		condition(nbr, base, re_ne_cou);
	}
}

// int main (void)
// {
//     printf("12 in base-2 is\n");
//     ft_putnbr_base(12, "01");
//     printf("\n");
//     printf("-12 in base-2 is\n");
//     ft_putnbr_base(-12, "01");
//     printf("\n");
//     printf("0 in base-2 is\n");
//     ft_putnbr_base(0, "01");
//     printf("\n");
//     printf("41 in base-3 is\n");
//     ft_putnbr_base(41, "012");
//     printf("\n");
//     printf("-41 in base-3 is\n");
//     ft_putnbr_base(-41, "012");
//     printf("\n");
//     printf("57 in base-8 is\n");
//     ft_putnbr_base(57, "01234567");
//     printf("\n");
//     printf("-57 in base-8 is\n");
//     ft_putnbr_base(-57, "01234567");
//     printf("\n");
//     printf("756 in base-16 is\n");
//     ft_putnbr_base(756, "0123456789ABCDEF");
//     printf("\n");
//     printf("-756 in base-16 is\n");
//     ft_putnbr_base(-756, "0123456789ABCDEF");
// 	printf("2147483647 in base-2 is\n");
// 	ft_putnbr_base(2147483647, "01");
//     return (0);
// }
// 12 in base-2 is
// 1100
// -12 in base-2 is
// -1100
// 0 in base-2 is
// 0
// 41 in base-3 is
// 1112
// -41 in base-3 is
// -1112
// 57 in base-8 is
// 71
// -57 in base-8 is
// -71
// 756 in base-16 is
// 2F4
// -756 in base-16 is
// -2F4%
