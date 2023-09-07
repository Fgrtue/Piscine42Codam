/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kkopnev <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 16:05:08 by kkopnev       #+#    #+#                 */
/*   Updated: 2023/08/30 16:05:18 by kkopnev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	position(char ch, char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] && str[pos] != ch)
	{
		pos++;
	}
	if (str[pos] == '\0')
		return (-1);
	else
		return (pos);
}

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

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' 
			|| base[i] < '!' || base[i] > '~')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] - base[j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	if (i > 1)
		return (1);
	else
		return (0);
}

int	condition(char *str, char *base, int numb, int sign)
{
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
	while (position(*str, base) > -1)
	{
		numb = (numb * ft_strlen(base)) + position(*str, base);
		str++;
	}
	return (numb * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	numb;
	int	sign;

	sign = 1;
	numb = 0;
	if (check_base(base) != 0)
	{
		return (condition(str, base, numb, sign));
	}
	else 
		return (0);
}

// int main(void)
// {
//    char base2[] = "01";
//    char base3[] = "012";
//    char base8[] = "01234567";
//    char base16[] = "0123456789ABCDEF";
// //  char base21[] = "0123456789ABCDEFGRTY";
//    char invalid1[] = "0123156789ABCDEF";
//    char invalid2[] = "-12356789BCDEF";
//    char invalid3[] = "012356789BCDE+";
//    printf("Invalid base with repetetions %d\n", 
//    ft_atoi_base("1010", invalid1));
//    printf("Invalid base with - %d\n", 
//    ft_atoi_base("1010", invalid2));
//    printf("Invalid base with + %d\n", 
//    ft_atoi_base("1010", invalid3));
//    printf("1010 from base-2 - %d\n", 
//    ft_atoi_base(" --+1010abc546", base2));
//    printf("-1010 from base-2 - %d\n", 
//    ft_atoi_base(" ---+1010+-1234", base2));
//    printf("22 from base-3 - %d\n", 
//    ft_atoi_base(" --++--22ab134", base3));
//    printf("-22 from base-3 - %d\n", 
//    ft_atoi_base("  ---++--2267", base3));
//    printf("144 from base-8 - %d\n", 
//    ft_atoi_base("  --++--14490_sf", base8));
//    printf("-144 from base-8 - %d\n", 
//    ft_atoi_base("  ---++--14490_sf", base8));
//    printf("FAA9 from base-16 - %d\n", 
//    ft_atoi_base("  --++--FAA9GAF", base16));
//    printf("-FAA9 from base-16 - %d\n", 
//    ft_atoi_base("  ---++--FAA9GAF", base16));
//    printf("0 from base-16 - %d\n", 
//    ft_atoi_base("  ---++--0GAF", base16));		
//    ft_atoi_base(" 	--++--2147483647GAF", base16));
//    printf("-2147483647 from base-16 - %d\n", 
//    ft_atoi_base(" 	---++---2147483647EGAF", base16));
//    return(0);
// }
