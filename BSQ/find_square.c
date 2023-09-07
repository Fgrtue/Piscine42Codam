/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_square.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ccraciun <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 16:08:47 by ccraciun      #+#    #+#                 */
/*   Updated: 2023/09/06 16:16:21 by ccraciun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

void	write_val(int	*fill_arr, int x, int y, int size)
{
	fill_arr[0] = x;
	fill_arr[1] = y;
	fill_arr[2] = size;
}

void	check_for_zero(char	**map, int	*crr_sqr, char	*emp_obs, int new_size)
{
	if (map[crr_sqr[1]][crr_sqr[0]] == emp_obs[0])
	{
		write_val(crr_sqr, crr_sqr[0], crr_sqr[1], new_size);
	}
	else
	{
		write_val(crr_sqr, (crr_sqr[0] + 1), crr_sqr[1], crr_sqr[2]);
	}
}

void	try_size(char	**map, int	*crr_sqr, char	*emp_obs, int new_size)
{
	int	y_size;
	int	x_size;

	x_size = 0;
	while (x_size < new_size)
	{
		y_size = 0;
		while (y_size < new_size)
		{
			if (map[crr_sqr[1] + y_size][crr_sqr[0] + x_size] == emp_obs[0])
				y_size++;
			else
			{
				write_val(crr_sqr, (crr_sqr[0] + x_size + 1),
					crr_sqr[1], crr_sqr[2]);
				x_size = new_size;
				break ;
			}
		}
		x_size++;
	}
	if (x_size == new_size && new_size != 0)
		write_val(crr_sqr, crr_sqr[0], crr_sqr[1], new_size);
	else if (x_size == new_size && new_size == 0)
		check_for_zero(map, crr_sqr, emp_obs, new_size);
}

void	new_coord(char	**map, int	*col_rows, int	*crr_sqr, char	*emp_obs)
{
	int	new_size;

	new_size = crr_sqr[2] + 1;
	if (col_rows[1] < (crr_sqr[1] + new_size))
		write_val(crr_sqr, col_rows[0], col_rows[1], crr_sqr[2]);
	else if ((col_rows[0] - 1) < (crr_sqr[0] + new_size))
		write_val(crr_sqr, col_rows[0], crr_sqr[1], crr_sqr[2]);
	else
		try_size(map, crr_sqr, emp_obs, new_size);
}

//This function has to find the square on the given grid.

int	*find_square(char	**map, int	*col_rows, char	*emp_obs)
{
	int	*crr_sqr;
	int	*sol_sqr;

	sol_sqr = malloc(sizeof(int) * 3);
	crr_sqr = malloc(sizeof(int) * 3);
	if (sol_sqr != NULL && crr_sqr != NULL)
	{
		write_val(crr_sqr, 0, 1, -1);
		write_val(sol_sqr, 0, 1, -1);
		while (crr_sqr[1] < col_rows[1])
		{
			crr_sqr[0] = 0;
			while (crr_sqr[0] < (col_rows[0] - 1))
			{
				new_coord(map, col_rows, crr_sqr, emp_obs);
				if (crr_sqr[2] > sol_sqr[2])
					write_val(sol_sqr, crr_sqr[0], crr_sqr[1], crr_sqr[2]);
			}
			crr_sqr[1]++;
		}
		free(crr_sqr);
		return (sol_sqr);
	}
	else
		return (NULL);
}
