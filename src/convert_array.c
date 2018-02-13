/*
** EPITECH PROJECT, 2017
** convert_array
** File description:
** Made by Joseph C.
*/

#include "my.h"

char	*create_buf(int ac, char **av)
{
	struct stat info;
	int fd = 0;
	int size = 0;
	int size_r = 0;
	char *buf;

	stat(av[1], &info);
	fd = open(av[1], O_RDONLY);
	size = info.st_size;
	buf = malloc(sizeof(char *) * (size + 1));
	size_r = read(fd, buf, size);
	check_param_fd_read(ac, fd, size_r);
	buf[size + 1] = '\0';
	close(fd);
	return (buf);
}

int	*create_int(char *str, int intlgth)
{
	int *array_int = malloc(sizeof(int *) * (intlgth + 1));
	int cnt = 0;

	while (str[cnt] != '\0') {
		if (str[cnt] == '.')
			array_int[cnt] = 1;
		else if (str[cnt] == 'o')
			array_int[cnt] = 0;
		else
			array_int[cnt] = -1;
		cnt++;
	}
	array_int[cnt] = -2;
	return (array_int);
}
