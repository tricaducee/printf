#include "ft_printf.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	(void)argv;
	//ft_putnbr_base_l(atoi(argv[1]), argv[2]);
	ft_printf(argv[1], argv[2], atoi(argv[3]));
	return (0);
}
