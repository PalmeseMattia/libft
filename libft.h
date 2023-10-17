#ifndef LIBFT_H
#define LIBFT_H

#include<string.h>
#include<stdint.h>
#include<limits.h>
#include<stdlib.h>

void    *ft_memset  (void *ptr, int value, size_t n);
void     ft_bzero   (void *ptr, size_t n);
void    *ft_memcpy  (void *dest, const void *src, size_t n);
void    *ft_memccpy (void *dest, const void *src, int c, size_t n);
void    *ft_memmove (void *dest, const void *src, size_t n);
void    *ft_memchr  (const void *s, int c, size_t n);
void    *ft_memrchr (const void *s, int c, size_t n);
int      ft_memcmp  (const void *s1, const void *s2, size_t n);
size_t   ft_strlen  (const char *s);
size_t   ft_strnlen (const char *s, size_t maxlen);
size_t   ft_strlcpy (char *dst, const char *src, size_t size);
size_t   ft_strlcat (char *dst, const char *src, size_t size);
char    *ft_strchr  (const char *s, int c);
char    *ft_strrchr (const char *s, int c);
int      ft_strcmp  (const char *s1, const char *s2);
int      ft_strncmp (const char *s1, const char *s2, size_t n);
int      ft_atoi    (const char *nptr);
int      ft_isupper (int c);
int      ft_islower (int c);
int      ft_isalpha (int c);
int      ft_isdigit (int c);
int      ft_isalnum (int c);
int      ft_isascii (int c);
int      ft_isprint (int c);
int      ft_toupper (int c);
int      ft_tolower (int c);
void    *ft_calloc  (size_t nmemb, size_t size);
char    *ft_strdup  (const char *s);

#endif