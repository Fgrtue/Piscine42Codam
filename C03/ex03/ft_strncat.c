/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/23 20:36:13 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/23 20:36:15 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
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
//    int n = 0;
//    char dest[40] = "hello ";
//    char srs[] = "MoTHErfuckER$$$";
//    int leng;

//    leng = *(&dest + 1) - dest;
//    ft_strncat(dest, srs, 6);
// //   strncat(dest, srs, 6);

//    while (n < leng+10)
//    {
//    if (dest[n] == '\0')
//    {
//        printf("buffer[%d] = \\0 \n", n);
//    }
//    else
//    {
//        printf("buffer[%d] = %c \n", n, dest[n]);
//    }
//    n++;
//  }  

//   printf("concatenated %s\n", dest);
//    return (0);
// }
