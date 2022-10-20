/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:22:51 by awallet           #+#    #+#             */
/*   Updated: 2022/10/20 16:50:23 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int	main(int ac, char **av, char **env)
{
	char	*line;

	(void)env;
	(void)av;
	(void)ac;
	line = NULL;
	while (true)
	{
		ft_putstr_fd("minishell> ", 0);
		line = get_next_line(0);
		if (line)
		{
			parser(line);
			free(line);
		}
	}
	return (e_succ);
}
