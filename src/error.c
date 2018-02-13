/*
** EPITECH PROJECT, 2017
** error
** File description:
** Made by Joseph C.
*/

#include "my.h"

void	check_param_fd_read(int ac, int fd, int size)
{
	if (ac != 2)
		exit(84);
	if (fd == -1 || size == -1)
		exit(84);
}

void	check_array_2nd_intlgth(char *str, int *start_2nd, int *intlgth)
{
	int cnt = 0;
	int cnt2 = 0;
	int cnt3 = 0;

	while (str[cnt] != '\n')
		cnt++;
	cnt++;
	*start_2nd = cnt;
	cnt2 = cnt;
	while (str[cnt2] != '\0') {
		cnt2++;
		cnt3++;
	}
	*intlgth = cnt3;
	while (str[cnt] == '\0') {
		if (str[cnt] == '.' || str[cnt] == 'o' || str[cnt] == '\n')
			cnt++;
		else
			exit(84);
	}
}
