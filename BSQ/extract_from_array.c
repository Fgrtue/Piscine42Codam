/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extract_from_array.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: ccraciun <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 18:58:49 by ccraciun      #+#    #+#                 */
/*   Updated: 2023/09/06 21:27:52 by ccraciun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count_rows(char *map_buf);

int	get_row_len(char **array)
{
	int	row_len;
	int	row;
	int	pos;

	row = 1;
	pos = 0;
	row_len = 0;
	if (row < 2)
	{
		row_len = 0;
		while (array[row][pos] != '\0')
		{
			row_len++;
			pos++;
		}
	}
	return (row_len);
}

char	*get_em_ob_fi(char *array)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(4 * sizeof(char));
	while (array[i] != '\n')
		i++;
	result[0] = array[i - 3];
	result[1] = array[i - 2];
	result[2] = array[i - 1];
	result[3] = '\0';
	return (result);
}
