/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/16 17:45:58 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/16 17:46:43 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int i);

void	ft_is_negative(int i)
{
	char	ch;

	if (i < 0)
	{
		ch = 'N';
	}
	else 
	{
		ch = 'P';
	}
	write(1, &ch, 1);
}

// int	main(void)
// {
// 	ft_is_negative(0);
// 	return (0);
// }
