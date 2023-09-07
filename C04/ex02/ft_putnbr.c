/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/19 16:49:45 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/24 14:26:17 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_for_0_neg(long int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		ft_putchar('-');
	}
}

int	dec_count(long int i)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

int	power_10(int i)
{
	int	ten;

	ten = 1;
	while (--i > 0)
	{
		ten = ten * 10;
	}
	return (ten);
}

void	ft_putnbr(int nb)
{
	long int	lnb;
	char		ch;
	int			count;
	int			cur_digit;

	lnb = nb;
	if (lnb <= 0)
	{
		check_for_0_neg(nb);
		lnb = lnb * -1;
	}
	count = dec_count(lnb);
	while (count > 0)
	{
		cur_digit = lnb / power_10(count);
		lnb = lnb - (cur_digit * power_10(count));
		ch = cur_digit + '0';
		write(1, &ch, 1);
		count--;
	}
}

// int main(void)
// {
//    ft_putnbr(INT_MIN);
//    return(0);
// }
