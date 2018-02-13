/*
** EPITECH PROJECT, 2017
** line_length
** File description:
** Made by Joseph C.
*/

int	lgth_sq(int *buf_int)
{
	int line_lght = 0;

	while (buf_int[line_lght] != (-1))
		line_lght++;
	line_lght++;
	return (line_lght);
}
