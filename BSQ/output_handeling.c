/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   output_handeling.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ccraciun <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 19:14:20 by ccraciun      #+#    #+#                 */
/*   Updated: 2023/09/06 21:28:19 by ccraciun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h> 
#include <unistd.h>

int	count_rows(char *map_buf);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	total_length(char **strs, int rows)
{
	int	i;
	int	total;

	i = 1;
	total = 0;
	while (i < rows)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total + 1);
}

char	ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (*original_dest);
}

char	*flatten_twod_array(char **array, int numRows)
{
	int		index;
	int		i;
	int		total_len;
	char	*result;

	i = 1;
	index = 0;
	total_len = total_length(array, numRows);
	result = (char *)malloc(total_len + 1);
	if (result == NULL)
		return (NULL);
	while (i < numRows)
	{
		ft_strcpy(result + index, array[i]);
		index += strlen(array[i]);
		i++;
	}
	return (result);
}

void	write_solved_map(char *arr)
{
	write(1, arr, ft_strlen(arr));
	free(arr);
}
