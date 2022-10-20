/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:03:58 by awallet           #+#    #+#             */
/*   Updated: 2022/10/20 16:55:10 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

// TODO: Remove the \n (EOF) when i split.
void	parser(char *line)
{
	char	**cmd;
	int		i;

	cmd = ft_split(line, ' ');
	i = -1;
	while (cmd[++i])
	{
		printf("cmd[%u] %s-\n", i, cmd[i]);
		if (ft_strcmp("cd", cmd[i]) == 0)
			printf("OUI\n");
		else if (ft_strcmp("exit", cmd[i]) == 0)
			exit(e_succ);
	}
	free(cmd);
}
