/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/23 20:48:15 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/23 21:17:51 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && to_find[j])
	{
		if (str[i] - to_find[j] != 0)
		{
			j = 0;
		}
		else
		{
			j++;
		}
		i++;
	}
	if (to_find[j] != '\0')
	{
		return (NULL);
	}
	return (&(str[i]) - j);
}

int main(void)
{
    char dest[] = "How is the weather";
    char srs[] = "is";
    int leng;

    leng = *(&dest + 1) - dest;

   printf("Substring: %s\n", ft_strstr(dest, srs));
    return (0);
}
