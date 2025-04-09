/*
** EPITECH PROJECT, 2017
** total_lenght_array
** File description:
** made by Joseph C.
*/

#include "my.h"

int	find_tot_lgth(int *array_int)
{
	int counter = 0;

	while (array_int[counter] != -2)
		counter++;
	return (counter);
}
