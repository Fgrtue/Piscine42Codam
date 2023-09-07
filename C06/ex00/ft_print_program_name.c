/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 18:12:11 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/09/06 21:22:25 by kkopnev       ########   odam.nl         */
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
	char	*pr_name;
	char	new_line;

	new_line = '\n';
	argc = 0;
	pr_name = argv[0];
	write(1, pr_name, str_len(argv[0]));
	write(1, &new_line, 1);
	return (0);
}
