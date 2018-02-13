/*
** EPITECH PROJECT, 2017
** square_finder
** File description:
** Made by Joseph C.
*/

#include "my.h"

int	*find_square(int *array, int intlgth, char *buf2)
{
	int cnt = intlgth;
	int sq = intlgth;
	int position = 0;
	int big_nb = 0;

	while (array[cnt] != -2) {
		if (array[cnt] == 1 && (cnt % (intlgth)) != 0) {
			array[cnt] = array[cnt - 1] + 1;
			array = who_is_min(cnt, sq, array);
		}
		cnt++;
	}
	big_nb = find_the_big_nb(array, &position);
	draw_the_result(big_nb, position, intlgth, buf2);
	return (array);
}

int	*who_is_min(int cnt, int sq, int *array)
{
	if (array[cnt - sq - 1] < array[cnt])
		array[cnt] = array[cnt - sq - 1] + 1;
	if (array[cnt - sq] < array[cnt])
		array[cnt] = array[cnt - sq] + 1;
	return (array);
}

int	find_the_big_nb(int *array, int *position)
{
	int cnt = 0;
	int big_nb = array[cnt];

	while (array[cnt] != -2) {
		if (array[cnt] > big_nb)
			big_nb = array[cnt];
		cnt++;
	}
	cnt = 0;
	while (array[cnt] != big_nb) {
		(*position)++;
		cnt++;
	}
	(*position)++;
	return (big_nb);
}

void	draw_the_result(int big_num, int position, int intlgth, char *buf2)
{
	int tmp_h = big_num;
	int tmp_l = big_num;
	int cnt = 0;

	while (tmp_h > 0) {
		while (tmp_l > 0) {
			buf2[position - tmp_l] = 'x';
			tmp_l--;
		}
		position = position - intlgth;
		tmp_l = big_num;
		tmp_h = tmp_h - 1;
	}
	while (buf2[cnt] != '\0')
		cnt++;
	write(1, buf2, cnt);
}
