/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/29 11:20:14 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/29 11:20:16 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] && size > 1)
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	dest[i] = '\0';
	return (length(src));
}

// int main(void)
// {
//   int n = 0; 
//   char src[10] = "AbCefg";
//   char dest[9];

//   printf("Result of original function is %lu \n",strlcpy(dest, src, 2));
// //  printf("Result of my function is %u \n", ft_strlcpy(dest, src, 2));
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
