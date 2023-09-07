/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/17 19:06:48 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/24 14:05:19 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checker(int i1, int i2, int i3, int i4)
{
	if (i1 == i3 && i2 >= i4)
	{
		return (i2 + 1);
	}
	return (i4);
}

void	ft_write(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	ft_putchar(' ');
	write (1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	printer(int i1, int i2, int i3, int i4)
{
	while (i1 <= 9)
	{
		i2 = 0;
		while (i2 <= 9)
		{
			i3 = i1;
			while (i3 <= 9)
			{
				i4 = 0;
				while (i4 <= 9)
				{
					i4 = checker(i1, i2, i3, i4);
					if (i4 < 10)
						ft_write(i1 + '0', i2 + '0', i3 + '0', i4 + '0');
					i4++;
				}
				i3++;
			}
			i2++;
		}
		i1++;
	}
}

void	ft_print_comb2(void)
{
	int	i1;
	int	i2;
	int	i3;
	int	i4;

	i1 = 0;
	i2 = 0;
	i3 = 0;
	i4 = 0;
	printer(i1, i2, i3, i4);
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
