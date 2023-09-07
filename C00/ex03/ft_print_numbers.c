/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/16 17:00:21 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/16 17:02:59 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int		i;
	char	ch;

	i = 0;
	ch = i + '0';
	while (i <= 9)
	{
		write(1, &ch, 1);
		i++;
		ch++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
