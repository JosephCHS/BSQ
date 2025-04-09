/*
** EPITECH PROJECT, 2017
** error
** File description:
** Made by Joseph C.
*/

#include "my.h"

void	check_param_fd_read(int argc, int fd, int size)
{
	if (argc != 2)
		exit(84);
	if (fd == -1 || size == -1)
		exit(84);
}

void	check_array_2nd_intlgth(char *str, int *start_2nd, int *intlgth)
{
	int first_line_index = 0;
	int current_index = 0;
	int length_counter = 0;

	while (str[first_line_index] != '\n')
		first_line_index++;
	first_line_index++;
	*start_2nd = first_line_index;
	current_index = first_line_index;
	while (str[current_index] != '\0') {
		current_index++;
		length_counter++;
	}
	*intlgth = length_counter;
	while (str[first_line_index] != '\0') { 
		if (str[first_line_index] == '.' || str[first_line_index] == 'o' 
			|| str[first_line_index] == '\n')
			first_line_index++;
		else
			exit(84);
	}
}
