/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaudran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:36:42 by lbaudran          #+#    #+#             */
/*   Updated: 2017/01/24 12:46:56 by lbaudran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "n_puzzle.h"

void		init_data(t_data *data)
{
	data->map = NULL;

}

void		recup_size(t_data *data)
{
	char *line;
	while (get_next_line(0, &line))
	{
		if (line[0] == '#')
			continue;
		if (is_int(line))
		{
			data->size = ft_atoi(line);
			free(line);
			return;
		}
	}
	exit(printf("MAP INCORRECTE\n"));
}

void recup_line(t_data *data,char *line)
{
	data->
}

void		parse_map(t_data *data)
{
	char *line;
	recup_size(data);
	data->map = (int *)malloc((data->size) * sizeof(int));
	while (get_next_line(0, &line))
	{
		if (line[0] == '#')
			continue;
		else
			recup_line(data, line);
	}

}

int main()
{
	t_data data;

	init_data(&data);
	parse_map(&data);
	is_solvable(&data);
	resolve();

}
