/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:22:51 by awallet           #+#    #+#             */
/*   Updated: 2022/09/06 13:57:39 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int	main(int ac, char **av, char **env)
{
	(void)env;
	(void)av;
	(void)ac;
	while (true)
	{
		ft_putstr_fd("minishell> ", 0);
		get_next_line(0);
	}
}