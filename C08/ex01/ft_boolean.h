#ifndef __FT_BOOLEAN_H__
#include <unistd.h>

#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define EVEN(n) (n % 2 == 0 ? TRUE : FALSE)
typedef int t_bool;

void		ft_putstr(char *str);
t_bool		ft_is_even(int nbr);

#endif 