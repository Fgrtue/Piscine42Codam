/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/23 20:42:59 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/24 15:31:51 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	int				i;
	unsigned int	j;
	unsigned int	len_dest;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	len_dest = i;
	if (n <= len_dest)
		return (n + length(src));
	while (src[j] && j < n - len_dest - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + length(src));
}

// int main(void)
// {
//     char dest[9] = "PeTer";
//     char srs[] = "xui";
// 	int n = 5;
// 	int k = 0;

// // 	printf("The result of my function is %u\n", ft_strlcat(dest, srs, n));
// 	printf("The result of original function is %lu\n", strlcat(dest, srs, n));
// 	while (k < 12)
//    	{
//    		if (dest[k] == '\0')
//    		{
//        		printf("buffer[%d] = \\0 \n", k);
//    		}
//    		else
//    		{
//        		printf("buffer[%d] = %c \n", k, dest[k]);
//    		}
//    		k++;
//  	}  
// }
