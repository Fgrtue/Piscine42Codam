/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 19:03:29 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/22 19:03:33 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++; 
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main(void)
// {
//   int n = 0; 
//   char src[9] = "adssdfgas";
//   char dest[10] = "##########";
//   ft_strncpy(dest, src, 7);
//   while (n < 20)
//   {
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
//   return(0);
// }
