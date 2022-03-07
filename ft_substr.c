/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjirapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 07:08:11 by yjirapin          #+#    #+#             */
/*   Updated: 2022/03/08 06:23:52 by yjirapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

// s: The string from which to create the substring.
// start: The start index of the substring in the
// string ’s’.
// len: The maximum length of the substring.

// Thisstr doesn't change so we do not need malloc

	//allocate memory of (len + 1) chars for substring
	//(+1 for extra null character)
	//char *str = malloc(sizeof(char) * (len + 1));
	//handle empty string with if(!str) return (NULL)
	//str[j] = 0 last character of a string is 0

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

/* Main function to test

#include <stdio.h>

int	main(void)
{
	char	*thisstr;
	char	*thatsub;

	thisstr = "supertestimonial";
	thatsub = ft_substr(thisstr, 5, 4);
	printf("The answer is %s \n", thatsub);
	free(thatsub);
	thisstr = "There will be a day that we will die";
	thatsub = ft_substr(thisstr, 30, 7);
	printf("The answer is %s \n", thatsub);
	free(thatsub);
	thisstr = "";
	thatsub = ft_substr(thisstr, 7, 3);
	printf("The answer is %s \n", thatsub);
	free(thatsub);
	return (0);
}
*/
