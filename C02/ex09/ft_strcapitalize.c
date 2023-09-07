/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 19:23:54 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/22 19:24:17 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str)
{
	char	*save;

	save = str;
	while (*str)
	{
		if ('A' <= *str && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (save);
}

int	prev_char(char *ch)
{
	if (!(*ch < 'A' || ('Z' < *ch && *ch < 'a') || 'z' < *ch))
	{
		return (0);
	}
	else if ('0' <= *ch && *ch <= '9')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*sv;

	sv = str;
	ft_strlowcase(str);
	while (*str)
	{
		if ('a' <= *str && *str <= 'z' && (prev_char((str - 1)) == 1))
		{
			*str = *str - 32;
		}
		str++;
	}
	return (sv);
}

// int main(void)
// {
//    char str[] = 
//    "salut, comMent tu vas ?dfh 42mots quarante-deux; cinquante+et+un";
// 	  char str1[] = 
//    "&Adjsnkv &fsjk ksjf 542fsd534ssdf +s+s+s((0ea)df a";
//    char str2[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";

//    printf("First experiment: %s\n", ft_strcapitalize(str));
// 	  printf("Second experiment: %s\n", ft_strcapitalize(str1));
// 	  printf("Third experiment: %s", ft_strcapitalize(str2));
//    return (0);
// }
