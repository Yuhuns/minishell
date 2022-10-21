/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:03:58 by awallet           #+#    #+#             */
/*   Updated: 2022/10/21 17:56:55 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

//cmd demande:
// echo, cd, pwd, export, unset, env, exit
void	parser(t_test *d, char *line)
{
	char	**cmd;

	if (ft_strcspn(line, "\n"))
		line = ft_strrmchr(line, '\n');
	cmd = ft_split(line, ' ');
	if (cmd[0])
	{
		if (ft_strcmp("cd", cmd[0]) == 0)
			printf("Looking for cd\n");
		else if (ft_strcmp("exit", cmd[0]) == 0)
			d->init = false;
		else
			printf("CMD %s\n", cmd[0]);
	}
	free(cmd);
}

