/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 18:14:12 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/09/06 21:22:43 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	char	*arg_name;
	int		i;
	char	new_line;

	new_line = '\n';
	i = 1;
	while (i < argc)
	{
		arg_name = argv[i];
		write(1, arg_name, str_len(arg_name));
		write(1, &new_line, 1);
		i++;
	}
	return (0);
}
