/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:22:44 by awallet           #+#    #+#             */
/*   Updated: 2022/10/21 17:55:22 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "utils.h"
# include "../libft/libft.h"
# include "../libft/get_next_line.h"

# include <stdio.h>

typedef struct e_test
{
	int	init;
}	t_test;

void	parser(t_test *d, char *line);

#endif