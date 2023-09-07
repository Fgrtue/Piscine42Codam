/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/29 19:39:11 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/09/02 22:35:51 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	numb;
	int	sign;

	sign = 1;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = sign * -1;
		}
		str++;
	}
	numb = 0;
	while ('0' <= *str && *str <= '9')
	{
		numb = (numb * 10) + (*str % 48);
		str++;
	}
	return (numb * sign);
}

// int main(void)
// {
// 	char str[] = "	--++2147483647a434ab567";
// 	char str1[] = "    --+-+-23561576558a434ab567";
// 	char str2[] = "    --+--+-a434ab567";
// 	char str3[] = "    --+-+-001a434ab567";
// 	char str4[] = "	- -++2147483647a434ab567";
// 	char str5[] = "--+-+-2147483646a434ab567";
// 	char str5[] = "	--+-+-0a434ab567";
//    printf("The result of my function is %d\n", ft_atoi(str));
//    printf("The result of my function is %d\n", ft_atoi(str1));
//    printf("The result of my function is %d\n", ft_atoi(str2));
//    printf("The result of my function is %d\n", ft_atoi(str3));
//    printf("The result of my function is %d\n", ft_atoi(str4));
//    printf("The result of my function is %d\n", ft_atoi(str5));
//    return(0);
// }
