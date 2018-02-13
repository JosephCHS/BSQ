/*
** EPITECH PROJECT, 2017
** gestion_error
** File description:
** Made by Joseph C.
*/

#include "my.h"

void	nb_line(char *str)
{
	int cnt = 0;
	int line = 0;

	while (str[cnt] != '\n') {
		if (str[cnt] < '0' || str[cnt] > '9')
			exit(84);
		line = line * 10;
		line = line + str[cnt] - '0';
		cnt++;
	}
}
