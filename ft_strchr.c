/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjirapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:32:06 by yjirapin          #+#    #+#             */
/*   Updated: 2022/03/07 10:22:51 by yjirapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strchr() function returns a pointer to the first occurrence
 of the character c in the string s.
*/

char	*ft_strchr(const char *s, int c)
{
	char	*newstr;

	newstr = (char *)s;
	while (*newstr != c)
	{
		if (*newstr == '\0')
		{
			return (0);
		}
		newstr++;
	}
	return (newstr);
}

/* Main function for testing

#include <unistd.h>
#include <stdio.h>

int main (void) {
	char * thisstr;

	thisstr = ft_strchr(" .?,",'?');
	printf("The answer is %s \n",thisstr);
	thisstr = ft_strchr(" .?,",'.');
	printf("The answer is %s \n",thisstr);
	thisstr = ft_strchr(" .?,",'c');
	printf("The answer is %s \n",thisstr);
}
*/
