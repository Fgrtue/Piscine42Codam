/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 21:43:51 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/09/06 21:44:08 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int	total_length(char **strs, int size, char *sep)
{
	int	total;

	total = ft_strlen(sep) * (size - 1);
	while (size > 0)
	{
		total += ft_strlen(strs[size - 1]);
		size--;
	}
	return (total);
}

void	copy_string(char *str, char *sep, char *concat, int *j)
{
	int	z;
	int	step;

	step = *j;
	z = 0;
	while (str[z])
	{
		concat[step] = str[z];
		z++;
		step++;
	}
	z = 0;
	while (sep[z])
	{
		concat[step] = sep[z];
		z++;
		step++;
	}
	*j = step;
}

char	*condition(int size, char **strs, char *sep, char *concat)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	z = 0;
	while (i < size - 1)
	{
		copy_string(strs[i], sep, concat, &j);
		i++;
	}
	while (strs[i][z])
	{
		concat[j] = strs[i][z];
		z++;
		j++;
	}
	concat[j] = '\0';
	return (concat);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;

	concat = malloc((total_length(strs, size, sep) + 1) * sizeof(char));
	if (concat != NULL)
	{
		return (condition(size, strs, sep, concat));
	}
	else
		return (NULL);
}

// int main(void)
// {
//     char **strs;
//     int size = 4;

//     strs = malloc(sizeof(char*) * size);

//     char sep[] = "()()";
//     char str1[] = "Kirill";
//     char str2[] = "Loves";
//     char str3[] = "Eating";
//     char str4[] = "Croissants";

//     strs[0] = str1;
//     strs[1] = str2;
//     strs[2] = str3; 
//     strs[3] = str4;

//     printf("The strings in array is: %s", ft_strjoin(size, strs, sep));
// //    printf("The strings in array is: %d", total_length(strs, size, sep));
//     return (0);
// }
