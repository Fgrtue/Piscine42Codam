/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 18:59:24 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/22 19:01:12 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++; 
	}
	dest[i] = '\0';
	return (dest);
}

// int	main()
// {
// 	char src[] = "beautiful";
// 	char src1[] = "beautiful";
// 	char dest[11] = "###########";
// 	char dest1[11] = "##########";
// 	printf("The my function does %s\n", ft_strcpy(dest, src));
// 	printf("Original function does %s", strcpy(dest1, src1));
// }
