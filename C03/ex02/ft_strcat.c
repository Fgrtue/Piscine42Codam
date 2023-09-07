/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/23 20:33:35 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/23 20:33:38 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
//     int n = 0;
//     char dest[10] = "abcde";
//     char srs[] = "fghj";

//     ft_strcat(dest, srs);
// //	strcat(dest, srs);
//     while (n < 13)
//     {
//     if (dest[n] == '\0')
//     {
//         printf("buffer[%d] = \\0 \n", n);
//     }
//     else
//     {
//         printf("buffer[%d] = %c \n", n, dest[n]);
//     }
//     n++;
//   }  

//    printf("concatenated %s\n", dest);
//     return (0);
// }
