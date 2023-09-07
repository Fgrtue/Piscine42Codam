/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 19:52:23 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/09/06 19:52:29 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

char	*alloc_mem(char	*name_file);
char	**input_to_arrays(char *map_buff);
char	**algorithm(char	**arrs, int	*col_rows, char	*emp_obs);
void	free_twod_arr(char **arr, int numRows);
int		get_row_len(char **array);
int		check_input(char	**array, char	*map_buf);
int		count_rows(char *map_buf);
char	*get_em_ob_fi(char *array);
char	*flatten_twod_array(char **array, int numRows);
void	write_solved_map(char *arr);
char	*alloc_mem_io(int i);
void	write_error(void);

void	process_invalid_map(char *map_buff, char **arrs)
{
	int		num_rows;

	num_rows = count_rows(map_buff);
	free_twod_arr(arrs, num_rows);
	write_error();
}

char	*process_valid_map(char *map_buff, char **arrs)
{
	int		col_rows[2];

	if (check_input(arrs, map_buff) == 1)
	{
		col_rows[0] = get_row_len(arrs);
		col_rows[1] = count_rows(map_buff);
		algorithm(arrs, col_rows, get_em_ob_fi(arrs[0]));
		free(map_buff);
		if (arrs[0][0] != 'e')
		{
			write_solved_map(flatten_twod_array(arrs, col_rows[1]));
		}
		else
		{
			free_twod_arr(arrs, col_rows[1]);
			write_error();
		}
	}
	else
	{
		process_invalid_map(map_buff, arrs);
	}
	return (map_buff);
}

void	work_file(char	*name_file)
{
	char	*map_buff;
	char	**arrs;

	map_buff = alloc_mem(name_file);
	if (map_buff != NULL)
	{
		arrs = input_to_arrays(map_buff);
		if (arrs != NULL)
		{
			if (check_input(arrs, map_buff) == 1)
				process_valid_map(map_buff, arrs);
			else
				process_invalid_map (map_buff, arrs);
		}
		else
			write_error();
	}
	else
		write_error();
}

void	work_input(void)
{
	char	*map_buff;
	char	**arrs;

	map_buff = alloc_mem_io(0);
	if (map_buff != NULL)
	{
		arrs = input_to_arrays(map_buff);
		if (arrs != NULL)
		{
			if (check_input(arrs, map_buff) == 1)
				process_valid_map(map_buff, arrs);
			else
				process_invalid_map (map_buff, arrs);
		}
		else
			write_error();
	}
	else
		write_error();
}

int	main(int argc, char	*argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			work_file(argv[i]);
			i++;
		}
	}
	else
		work_input();
	return (0);
}
