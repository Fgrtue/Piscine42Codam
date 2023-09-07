/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_input.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ccraciun <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 18:50:44 by ccraciun      #+#    #+#                 */
/*   Updated: 2023/09/06 21:27:27 by ccraciun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// This function should check the input for all the conditions
// 1. All lines of the same lengh; done
// 2. It should be non-empty, i.e. there should be at least 2 lines,
// the 0-line and another line with empty/obtstacle char;
// 3. At the end of the line there is line break;
// 4. No invalid caracters (only the ones on the 1st line)
// 5. Character can be only printable (32 <= x <= 126)
#include <stdio.h>

int	count_rows(char *map_buf);

int	ft_atoi(char *str)
{
	int	i;
	int	numb;
	int	actual_len;

	i = 0;
	numb = 0;
	actual_len = 0;
	while (str[actual_len] && str[actual_len] != '\n')
		actual_len++;
	while ('0' <= str[i] && str[i] <= '9' && i < actual_len - 3)
	{
		numb = (numb * 10) + (str[i] % 48);
		i++;
	}
	return (numb);
}

int	count_until_nl(char *map_buf)
{
	int	i;
	int	nb_nl;
	int	elem;

	i = 0;
	nb_nl = 0;
	elem = 0;
	while (map_buf[i] && nb_nl != 2)
	{
		if (nb_nl == 1)
			elem++;
		if (map_buf[i] == '\n')
			nb_nl++;
		i++;
	}
	if (elem != 0 && nb_nl >= 2)
		return (1);
	else
		return (0);
}

int	check_row_length(char **array, int numRows)
{
	int	row;
	int	row_len;
	int	expected_row_len;
	int	atoi_rows;

	expected_row_len = -1;
	row = 1;
	atoi_rows = ft_atoi(array[0]);
	while (row < numRows - 1)
	{
		row_len = 0;
		while (array[row][row_len] != '\0')
			row_len++;
		if (expected_row_len == -1)
			expected_row_len = row_len;
		else if (row_len != expected_row_len)
			return (0);
		row++;
	}
	if (atoi_rows == row)
		return (1);
	else
		return (0);
}

//Checks the first line

int	check_valid_obs_emp(char *array)
{
	int	i;
	int	actual_len;

	i = 0;
	actual_len = 0;
	while (array[actual_len] != '\n' && array[actual_len])
		actual_len++;
	if (actual_len < 4)
		return (0);
	while (i < actual_len - 3)
	{
		if (array[i] < '0' || array[i] > '9')
			return (0);
		i++;
	}
	while (i < actual_len)
	{
		if (array[i] >= 32 && array[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

int	check_valid_characters(char *array)
{
	char	cha[3];

	while (*array != '\0')
	{
		while (*array != '\n')
			array++;
		array -= 3;
		cha[0] = *array;
		array++;
		cha[1] = *array;
		array++;
		cha[2] = *array;
		array++;
		if (cha[0] == cha[1]
			|| cha[1] == cha[2] || cha[2] == cha[0])
			return (0);
		while (*array != '\0')
		{
			if ((*array != cha[0])
				&& (*array != cha[1]) && (*array != '\n'))
				return (0);
			array++;
		}
	}
	return (1);
}
