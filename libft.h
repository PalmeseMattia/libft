/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmese <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:05:09 by dpalmese          #+#    #+#             */
/*   Updated: 2024/01/19 12:05:14 by dpalmese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H

#include<limits.h>
#include<stdlib.h>
#include<unistd.h>

#define ASCII_ZERO 48
typedef struct s_list
{
	void *content;
	struct s_list *next;
}    t_list;
void			*ft_memset		(void *ptr, int value, size_t n);
void			ft_bzero   		(void *ptr, size_t n);
void			*ft_memcpy 		(void *dest, const void *src, size_t n);
void			*ft_memccpy		(void *dest, const void *src, int c, size_t n);
void			*ft_memmove		(void *dest, const void *src, size_t n);
void			*ft_memchr 		(const void *s, int c, size_t n);
void			*ft_memrchr		(const void *s, int c, size_t n);
int				ft_memcmp  		(const void *s1, const void *s2, size_t n);
size_t  		ft_strlen  		(const char *s);
size_t  		ft_strnlen 		(const char *s, size_t maxlen);
size_t   		ft_strlcpy 		(char *dst, const char *src, size_t size);
unsigned int	ft_strlcat		(char *dst, const char *src, size_t dstsize);
char			*ft_strchr		(const char *s, int c);
char			*ft_strrchr		(const char *s, int c);
int				ft_strcmp		(const char *s1, const char *s2);
int				ft_strncmp		(const char *s1, const char *s2, size_t n);
int				ft_atoi			(const char *nptr);
int				ft_isupper		(int c);
int				ft_islower		(int c);
int				ft_isalpha		(int c);
int				ft_isdigit		(int c);
int				ft_isalnum		(int c);
int				ft_isascii		(int c);
int				ft_isprint		(int c);
int				ft_toupper		(int c);
int				ft_tolower		(int c);
void			*ft_calloc      (size_t nmemb, size_t size);
char			*ft_strdup      (const char *s);
char			*ft_strnstr     (const char *haystack, const char *needle, size_t len);
void			ft_putchar_fd   (char c, int fd);
void			ft_putstr_fd    (char *s, int fd);
void			ft_putendl_fd   (char *s, int fd);
void			ft_strrev       (char *str);
char			*ft_strjoin		( const char *s1, const char *s2);
int				ft_numdigits	(int n);
char			*ft_strncpy		(char * dst, const char * src, size_t len);
char			*ft_strmapi		(const char *s, char (*f)(unsigned int, char));
void			ft_lstadd_back	(t_list **lst, t_list *new);
void			ft_lstadd_front	(t_list **lst, t_list *new);
void			ft_lstclear		(t_list **lst, void (*del)(void*));
void			ft_lstdelone	(t_list *lst, void (*del)(void*));
void			ft_lstiter		(t_list *lst, void (*f)(void *));
t_list			*ft_lstlast		(t_list *lst);
t_list			*ft_lstnew		(void *content);
int				ft_lstsize		(t_list *lst);
t_list			*ft_lstmap		(t_list *lst, void *(*f)(void *), void (*del)(void *));
char			*ft_itoa		(int n);
char			*ft_substr		(char const *s, unsigned int start, size_t len);
void			ft_striteri		(char *s, void (*f)(unsigned int, char*));
#endif
