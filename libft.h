/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjirapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:42:16 by yjirapin          #+#    #+#             */
/*   Updated: 2022/03/04 21:45:31 by yjirapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int coldplay);
int			ft_strlen(char *str);
int			ft_isascii(int chill);
int			ft_isprint(int cicada);
int			ft_tolower(int mama);
int			ft_toupper(int papa);
int			ft_isspace(int c);
int			ft_atoi(char *str);
size_t		ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t		ft_strlcat(char *dest, const char *src, size_t destsize);
void		*ft_memset(void *pointme, int coolbean, size_t sandworm);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *to, const void *from, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);

#endif
