/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:37:46 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/11 02:09:32 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_atoi(const char *c);
char		*ft_strdup(const char *src);
void		ft_bzero(void *str, size_t n);
void		*ft_calloc(size_t nb, size_t size);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
void		*ft_memset(void *str, int c, size_t n);
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_strjoin(char const *s1, char const *s2);
void		*ft_memchr(const void *str, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
int			ft_strlcpy(char *dest, const char *src, size_t size);
int			ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_substr(const char *s, unsigned int start, size_t len);
int			ft_memcmp(const void *str1, const void *str2, size_t num );
int			ft_strncmp(const char *str1, const char *str2,
				size_t num);
char		*ft_strnstr(const char	*big, const char *little,
				size_t len);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif