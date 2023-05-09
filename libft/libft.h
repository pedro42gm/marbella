/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:12:48 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 23:43:32 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Include libraries */

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/* Funtions from <ctype.h> library */

// ASCII character test.
int		ft_isascii( int character );
// alphanumeric character test.
int		ft_isalnum(int character);
// alphabetic character test.
int		ft_isalpha(int character);
// decimal-digit character test.
int		ft_isdigit( int character );
// printing character test.
int		ft_isprint(int character);
// upper case to lower case letter convertion.
int		ft_tolower(int charact);
// lower case to upper case letter convertion.
int		ft_toupper(int charact);

/* Functions from <tdlib.h> library */

// convert ASCII string to integer.
int		ft_atoi( const char *str);
// memory allocation
void	*ft_calloc( size_t elementCount, size_t elementSize );

/* Functions from <string.h> library */

// write zeroes to a byte string.
void	ft_bzero(void *s, size_t n);
// write byte to byte string.
void	*ft_memset(void *ptr, int value, size_t count);
// locate byte in byte string.
void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
// compare byte string.
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
// copy byte string.
void	*ft_memmove(void *dest, const void *src, size_t n);
// copy memory area.
void	*ft_memcpy(void *dest, const void *src, size_t n);

/* Functions from <strings.h> library */

// find lengt of string.
size_t	ft_strlen(const char *theString);
// locate character in string (first occurrence).
char	*ft_strchr(const char *string, int searchedChar);
// locate character in string (last occurrence).
char	*ft_strrchr(const char *string, int searchedChar);
// locate a substring in a string (siza-bounded).
char	*ft_strnstr(const char	*big, const char *little, size_t len);
// save a copy of a string (with malloc)
char	*ft_strdup(const char *source);
// size-bounded string coppying.
size_t	ft_strlcpy( char *dst, const char *src, size_t size);
// size-bounded string concatenation.
size_t	ft_strlcat(char *dst, const char *src, size_t size);
// size-bounded string comparison.
int		ft_strncmp(const char *first, const char *second, size_t length);

/* Non-standard functions */

// output a character to given file.
void	ft_putchar_fd(char c, int fd);
// output string to given.
void	ft_putstr_fd(char *s, int fd);
// output string to given file with new line.
void	ft_putendl_fd(char *s, int fd);
// output integer to given file.
void	ft_putnbr_fd(int n, int fd);
// convert integer to ASCII string.
char	*ft_itoa(int n);
// extract substring from string.
char	*ft_substr(char const *s, unsigned int start, size_t len);
// trim begining and end of string with the specified character.
char	*ft_strtrim(char const *s1, char const *set);
// concatenate two string strings into a new string (with mallloc).
char	*ft_strjoin(char const *s1, char const *s2);
// split string, with specified character as delimiter, an array of strings.
char	**ft_split(char const *s, char c);
// create new string from modifying string with specified function.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// applies a function to each character of the string passed as argumet.
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/* Part 2 - bonuses */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

// create a new list.
t_list	*ft_lstnew(void *content);
// count elements of a list.
int		ft_lstsize(t_list *lst);
// find last element of a list.
t_list	*ft_lstlast(t_list *lst);
// add a new element at end of list.
void	ft_lstadd_back(t_list **alst, t_list *new);
// add new element at begining of list.
void	ft_lstadd_front(t_list **alst, t_list *new);
// delete element from list.
void	ft_lstdelone(t_list *lst, void (*del)(void*));
// delete sequence of elements of list from a starting point.
void	ft_lstclear(t_list **lst, void (*del)(void*));
// apply function to content of all list's elements.
void	ft_lstiter(t_list *lst, void (*f)(void *));
// apply function to content of all list's elements into new list.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
