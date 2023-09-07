/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_input.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ccraciun <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 16:20:07 by ccraciun      #+#    #+#                 */
/*   Updated: 2023/09/06 16:21:44 by ccraciun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

int	check_valid_characters(char *array);
int	check_valid_obs_emp(char *array);
int	check_row_length(char **array, int numRows);
int	count_rows(char *map_buf);
int	count_until_nl(char *map_buf);

int	count_all_nl(char *map_buf)
{
	int	i;
	int	nb_nl;

	i = 0;
	nb_nl = 0;
	while (map_buf[i])
	{
		if (map_buf[i] == '\n')
			nb_nl++;
		i++;
	}
	return (nb_nl);
}

int	check_input(char	**array, char	*map_buf)
{
	int	lines_numb;

	if (check_valid_obs_emp(array[0]) != 1)
	{
		return (0);
	}
	else if (check_valid_characters(map_buf) != 1)
	{
		return (0);
	}
	else if (count_until_nl(map_buf) != 1)
	{
		return (0);
	}
	lines_numb = count_rows(map_buf);
	if (check_row_length(array, lines_numb) != 1)
		return (0);
	else if (lines_numb != count_all_nl(map_buf))
		return (0);
	else
		return (1);
}
