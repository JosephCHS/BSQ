/*
** EPITECH PROJECT, 2017
** gestion_error
** File description:
** Made by Joseph C.
*/

#include "my.h"

void	nb_line(char *str)
{
	int index = 0;
	int line_number = 0;

	while (str[index] != '\n') {
		if (str[index] < '0' || str[index] > '9')
			exit(84);
		line_number = line_number * 10;
		line_number = line_number + str[index] - '0';
		index++;
	}
}
