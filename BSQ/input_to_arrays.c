/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_to_arrays.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ccraciun <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 19:08:32 by ccraciun      #+#    #+#                 */
/*   Updated: 2023/09/05 20:35:58 by ccraciun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

int	count_rows(char *map_buf)
{
	int	rows;
	int	i;

	rows = 0;
	i = 0;
	while (map_buf[i])
	{
		if (map_buf[i] == '\n')
		{
			rows++;
		}
		i++;
	}
	return (rows);
}

char	*fill_row(char *map_buf)
{
	int		len_row;
	char	*filled_row;
	int		i_char;

	len_row = 0;
	i_char = 0;
	while (map_buf[len_row] && map_buf[len_row] != '\n')
		len_row++;
	filled_row = malloc(sizeof(char) * (len_row + 2));
	if (filled_row != NULL)
	{
		while (map_buf[i_char] && i_char <= len_row)
		{
			filled_row[i_char] = map_buf[i_char];
			i_char++;
		}
		filled_row[i_char] = '\0';
		return (filled_row);
	}
	else
		return (NULL);
}

//This function parses the whole map into 2D array

char	**input_to_arrays(char *map_buf)
{
	char	**ptr_to_inputs;
	int		rows;
	int		i_rows;

	rows = count_rows(map_buf);
	if (rows == 0)
		return (NULL);
	i_rows = 0;
	ptr_to_inputs = malloc(rows * sizeof (char *));
	if (ptr_to_inputs != NULL)
	{
		while (i_rows < rows)
		{
			ptr_to_inputs[i_rows] = fill_row(map_buf);
			while (*map_buf && *map_buf != '\n')
			{
				map_buf++;
			}
			map_buf++;
			i_rows++;
		}
		return (ptr_to_inputs);
	}
	else
		return (NULL);
}
