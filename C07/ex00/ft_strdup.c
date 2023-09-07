/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/06 21:27:17 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/09/06 21:31:10 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//If there is not enough memory to be
//allocated the function should return NULL.
//O/w it returns the pointer to the spot where
// the string was copied. 

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

char	*ft_strdup(char *src)
{
	char	*pt;
	char	*save;

	pt = malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (pt != NULL)
	{
		save = pt;
		while (*src)
		{
			*pt = *src;
			src++;
			pt++;
		}
		return (save);
	}
	else
		return ((void *)0);
}

int main(void)
{
    char src[] = "Ya em ezhey";
 //   char *pt_strdup = strdup(src);

    printf("Result of strdup %s\n", strdup(src));
    printf("Result of ft_strdup %s", ft_strdup(src));
    return (0);
}
