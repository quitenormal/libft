/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjirapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:17:33 by yjirapin          #+#    #+#             */
/*   Updated: 2022/03/07 21:19:37 by yjirapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// ft_strrchr function searches within the string pointed to by
// s1 for the string pointed to by s2.
//It returns a pointer to the first occurrence in s1 of s2.

int			ft_strlen(char *str);

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	s = (char *)str;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
