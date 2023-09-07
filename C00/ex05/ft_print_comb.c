/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/17 16:07:01 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/17 16:54:09 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_write(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		ft_space();
	}
}

void	ft_print_comb(void)
{
	char	ch0;
	char	ch1;
	char	ch2;

	ch0 = '0';
	while (ch0 <= '7')
	{
		ch1 = ch0 + 1;
		while (ch1 <= '8')
		{
			ch2 = ch1 + 1;
			while (ch2 <= '9')
			{
				ft_write(ch0, ch1, ch2);
				ch2++;
			}
			ch1++;
		}
		ch0++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
