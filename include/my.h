/*
** EPITECH PROJECT, 2017
** header
** File description:
** Made by Joseph C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	nb_line(char *);
void	check_param_fd_read(int, int, int);
void	check_array_2nd_intlgth(char *, int *, int *);
char	*create_buf(int, char **);
int	*create_int(char *, int);
int	lgth_sq(int *);
int	*find_square(int *, int, char *);
int	*who_is_min(int, int, int *);
int	find_tot_lgth(int *);
int	find_the_big_nb(int *, int *);
void	draw_the_result(int, int, int, char *);
