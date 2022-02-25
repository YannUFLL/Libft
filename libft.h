/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:14:00 by ydumaine          #+#    #+#             */
/*   Updated: 2022/02/24 15:08:41 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBFT_H
# define	LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int value, size_t count);
void	ft_bzero(void *s, size_t n);
void	*memcpy(void *dst, const void *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const char *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void 	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1); // pas trop sur aussi 
char 	*ft_substr(char const *s, unsigned int start, size_t len); // pas trop sur lol 
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, char *src, size_t size);


#endif 