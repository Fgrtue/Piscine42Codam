/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/23 20:29:21 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/23 20:29:35 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

// int main(void)
// {
//     char s1[] = "kdjsghdfghjghjgfjsgertuertdjsghdfghjghjgfjsgertuert";
//     char s2[] = "kdjsghdfghjghjgfjsgertuert";

//     printf("%d", ft_strcmp(s1, s2));
//     return(0);
// }
