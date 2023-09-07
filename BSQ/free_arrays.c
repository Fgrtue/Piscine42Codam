/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_arrays.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ccraciun <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 19:05:53 by ccraciun      #+#    #+#                 */
/*   Updated: 2023/09/05 19:06:53 by ccraciun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

int	count_until_nl(char *map_buf);
int	count_rows(char *map_buf);

void	write_error(void)
{
	char	ch;

	ch = '\n';
	write(1, "map error", 9);
	write(1, &ch, 1);
}

void	free_twod_arr(char ***arr, int numRows)
{
	int	row;

	row = 0;
	while (row < numRows)
	{
		free(arr[row]);
		arr[row] = NULL;
		row++;
	}
	free(arr);
	arr = NULL;
}
