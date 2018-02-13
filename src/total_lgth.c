/*
** EPITECH PROJECT, 2017
** total_lenght_array
** File description:
** made by Joseph C.
*/

#include "my.h"

int	find_tot_lgth(int *array_int)
{
	int cnt = 0;

	while (array_int[cnt] != -2) {
		cnt++;
	}
	return (cnt);
}
