/*
** EPITECH PROJECT, 2017
** square_finder
** File description:
** Made by Joseph C.
*/

#include "my.h"

int	*find_square(int *array, int intlgth, char *buf2)
{
	int index = intlgth;
	int square_size = intlgth;
	int position = 0;
	int biggest_number = 0;

	while (array[index] != -2) {
		if (array[index] == 1 && (index % (intlgth)) != 0) {
			array[index] = array[index - 1] + 1;
			array = who_is_min(index, square_size, array);
		}
		index++;
	}
	biggest_number = find_the_big_nb(array, &position);
	draw_the_result(biggest_number, position, intlgth, buf2);
	return (array);
}

int	*who_is_min(int index, int square_size, int *array)
{
	if (array[index - square_size - 1] < array[index])
		array[index] = array[index - square_size - 1] + 1;
	if (array[index - square_size] < array[index])
		array[index] = array[index - square_size] + 1;
	return (array);
}

int	find_the_big_nb(int *array, int *position)
{
	int index = 0;
	int biggest_number = array[index];

	while (array[index] != -2) {
		if (array[index] > biggest_number)
			biggest_number = array[index];
		index++;
	}
	index = 0;
	while (array[index] != biggest_number) {
		(*position)++;
		index++;
	}
	(*position)++;
	return (biggest_number);
}

void	draw_the_result(int square_size, int position, int intlgth, char *buf2)
{
	int height = square_size;
	int width = square_size;
	int string_length = 0;

	while (height > 0) {
		while (width > 0) {
			buf2[position - width] = 'x';
			width--;
		}
		position = position - intlgth;
		width = square_size;
		height = height - 1;
	}
	while (buf2[string_length] != '\0')
		string_length++;
	write(1, buf2, string_length);
}
