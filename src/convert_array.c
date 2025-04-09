/*
** EPITECH PROJECT, 2017
** convert_array
** File description:
** Made by Joseph C.
*/

#include "my.h"

char	*create_buf(int argc, char **argv)
{
	struct stat info;
	int file_descriptor = 0;
	int file_size = 0;
	int read_size = 0;
	char *buffer;

	stat(argv[1], &info);
	file_descriptor = open(argv[1], O_RDONLY);
	file_size = info.st_size;
	buffer = malloc(sizeof(char) * (file_size + 1));
	read_size = read(file_descriptor, buffer, file_size);
	check_param_fd_read(argc, file_descriptor, read_size);
	buffer[file_size] = '\0';
	close(file_descriptor);
	return (buffer);
}

int	*create_int(char *str, int intlgth)
{
	int *array_int = malloc(sizeof(int) * (intlgth + 1));
	int index = 0;

	while (str[index] != '\0') {
		if (str[index] == '.')
			array_int[index] = 1;
		else if (str[index] == 'o')
			array_int[index] = 0;
		else
			array_int[index] = -1;
		index++;
	}
	array_int[index] = -2;
	return (array_int);
}
