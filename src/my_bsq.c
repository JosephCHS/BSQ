/*
** EPITECH PROJECT, 2017
** my_bsq
** File description:
** Made by Joseph C.
*/

#include "my.h"

int	main(int argc, char **argv)
{
	int *array_int = NULL;
	char *array_buf = NULL;
	char *buf2 = NULL;
	int intlgth = 0;
	int start_2nd = 0;
	int line_length = 0;

	array_buf = create_buf(argc, argv);
	nb_line(array_buf);
	check_array_2nd_intlgth(array_buf, &start_2nd, &intlgth);
	buf2 = array_buf + start_2nd;
	array_int = create_int(buf2, intlgth);
	line_length = lgth_sq(array_int);
	array_int = find_square(array_int, line_length, buf2);
	return (0);
}
