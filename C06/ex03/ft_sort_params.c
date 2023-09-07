/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 18:19:24 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/09/06 21:23:47 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_swap(char **add1, char **add2)
{
	char	*c;

	c = *add1;
	*add1 = *add2;
	*add2 = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(char **tab, int size)
{
	char	**add1;
	char	**add2;
	char	**counter;

	add1 = tab + 1;
	counter = (add1 + size - 2);
	while (add1 < counter)
	{
		add2 = add1;
		while (add2 <= counter)
		{
			if (ft_strcmp(*add1, *add2) > 0)
			{
				ft_swap(add1, add2);
				add2 = add1;
			}
			else
			{
				add2++;
			}
		}
		add1++;
	}
}

int	main(int argc, char *argv[])
{
	char	*arg_name;
	char	new_line;
	int		i;

	new_line = '\n';
	i = 1;
	ft_sort_int_tab(argv, argc);
	while (i < argc)
	{
		arg_name = argv[i];
		write(1, arg_name, str_len(arg_name));
		write(1, &new_line, 1);
		i++;
	}
	return (0);
}
