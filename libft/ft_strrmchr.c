/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrmchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:23:23 by awallet           #+#    #+#             */
/*   Updated: 2022/10/21 17:46:35 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Remove the chr of the end from a string.
char	*ft_strrmchr(char *s, char c)
{
	size_t	ln;

	ln = ft_strlen(s) - 1;
	if (*s && s[ln] == c)
		s[ln] = 0;
	return (s);
}
