/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   alloc_mem.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ccraciun <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 18:48:20 by ccraciun      #+#    #+#                 */
/*   Updated: 2023/09/06 16:07:57 by ccraciun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

int	count_the_bytes(char *name_file)
{
	int		fd;
	char	*map_buf;
	int		bytes;

	fd = open(name_file, O_RDONLY);
	map_buf = malloc(sizeof(char));
	bytes = 0;
	if (map_buf != NULL && fd != -1)
	{
		bytes = read(fd, map_buf, sizeof(char));
		while (read (fd, map_buf, sizeof(char)) != 0)
		{
			free(map_buf);
			bytes++;
			map_buf = malloc(sizeof(char));
			if (map_buf == NULL)
				return (-1);
		}
		free(map_buf);
	}
	close(fd);
	return (bytes);
}

char	*alloc_mem(char *name_file)
{
	int		bytes;
	char	*map_buf;
	int		fd;

	bytes = count_the_bytes(name_file);
	if (bytes > 0)
	{
		fd = open(name_file, O_RDONLY);
		map_buf = malloc(sizeof(char) * (bytes + 1));
		if (map_buf != NULL)
		{
			read(fd, map_buf, (sizeof(char) * (bytes + 1)));
			close(fd);
			map_buf[bytes] = '\0';
			return (map_buf);
		}
	}
	return (NULL);
}

char	*alloc_mem_io(int i)
{
	char	c;
	char	*str;

	if (read(0, &c, 1) != 0)
	{
		str = alloc_mem_io(i + 1);
		if (!str)
			return (NULL);
		str[i] = c;
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	str[i] = '\0';
	return (str);
}
