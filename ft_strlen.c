/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjirapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:35:18 by yjirapin          #+#    #+#             */
/*   Updated: 2022/03/14 20:45:08 by yjirapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Return the length of the input string
//strlen does not include /0 at the end

int	ft_strlen(const char *str)
{
	const char	*s;
	int			i;

	s = str;
	i = 0;
	while (s[i])
		i++;
	return (i);
}
