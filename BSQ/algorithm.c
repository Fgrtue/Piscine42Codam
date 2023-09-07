/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   algorithm.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ccraciun <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 16:02:23 by ccraciun      #+#    #+#                 */
/*   Updated: 2023/09/06 16:07:49 by ccraciun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

// This file contains the excecution of the algorithm

int		*find_square(char	**map, int	*col_rows, char	*emp_obs);
void	free_twod_arr(char **arr, int numRows);

void	fill_square(char	**arrs, int	*answer, char	*emp_obs)
{
	int	y_size;
	int	x_size;

	x_size = 0;
	while (x_size < answer[2])
	{
		y_size = 0;
		while (y_size < answer[2])
		{
			arrs[answer[1] + y_size][answer[0] + x_size] = emp_obs[2];
			y_size++;
		}
		x_size++;
	}
}

void	algorithm(char	**arrs, int	*col_rows, char	*emp_obs)
{
	int	*answer;

	answer = malloc(sizeof(int) * 3);
	answer = find_square(arrs, col_rows, emp_obs);
	if (answer[2] == -1)
	{
		arrs[0][0] = 'e';
		free(answer);
	}
	else
	{
		fill_square(arrs, answer, emp_obs);
		free(answer);
		free(emp_obs);
	}
}
