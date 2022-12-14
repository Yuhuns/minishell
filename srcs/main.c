/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:22:51 by awallet           #+#    #+#             */
/*   Updated: 2022/10/21 17:58:21 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int	main(int ac, char **av, char **env)
{
	char	*line;
	t_test	d;

	(void)env;
	(void)av;
	(void)ac;
	line = NULL;
	d.init = true;
	while (d.init)
	{
		ft_putstr_fd("minishell> ", 0);
		line = get_next_line(0);
		if (line)
			parser(&d, line);
	}
	free(line);
	return (e_succ);
}
