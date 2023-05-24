/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:12:48 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 13:05:18 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Include libraries */

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

// Funtions from --------- <ctype.h> --------- library 

// ISASCII: ASCII character test.
/**																	ISASCII
 * @brief	Check that it is in ASCII.
 * 
 * @param character Character to be checked.
 * 
 * @return True if the character is encoded in ascii.
 * @return False if the character is not encoded in ascii.
 **/
int		ft_isascii(int character);

// ISALNUM: alphanumeric character test.
/**																	ISALNUM
 * @brief	Check that it is alphanumeric.
 * 
 * @param character Character to be checked.
 * 
 * @return True if the character is alphanumeric.
 * @return False if the character is not alphanumeric.
 **/
int		ft_isalnum(int character);

// ISALPHA: alphabetic character test.
/**																	ISALPHA
 * @brief	Check that it is alphabetical.
 * 
 * @param character Character to be checked.
 * 
 * @return True if the character is alphabetic.
 * @return False if the character is not alphabetic.
 **/
int		ft_isalpha(int character);

// ISDIGIT: decimal-digit character test.
/**																	ISDIGIT
 * @brief	Check if it is a digit.
 * 
 * @param character Character to be checked.
 * 
 * @return True if the character is digit.
 * @return False if the character is not digit.
 **/
int		ft_isdigit(int character);

// ISPRINT: printing character test.
/**																	ISPRINT
 * @brief	Check that it is printable.
 * 
 * @param character Character to be checked.
 * 
 * @return True if the character is printable.
 * @return False if the character is not printable.
 **/
int		ft_isprint(int character);

// TOLOWER: upper case to lower case letter convertion.
/**																	TOLOWER
 * @brief	Transforms uppercase characters to lowercase.
 * 
 * @param charact Character to be transform.
 * 
 * @return the character passed to lower case.
 **/
int		ft_tolower(int charact);

// TOUPPER: lower case to upper case letter convertion.
/**																	TOUPPER
 * @brief	Transforms lowercase characters to uppercase.
 * 
 * @param charact Character to be transform.
 * 
 * @return the character passed to upper case.
 **/
int		ft_toupper(int charact);

// Functions from --------- <stdlib.h> --------- library.

// ATOI: convert ASCII string to integer.
/**																	ATOI
 * @brief	Converts the initial portion of the string pointed to by 'str' 
 * to int representation.
 * 
 * @param str String.
 * 
 * @return Localized integer.
 **/
int		ft_atoi(const char *str);

// CALLOC: memory allocation.
/**																	CALLOC
 * @brief Allocates memory for an array of "elementCount" elements. 
 * The allocated memory is filled with bytes of value zero.
 * 
 * @param elementCount	Number of elements.
 * @param elementSize	Size of each element.
 * 
 * @return Pointer to the allocated memory.
 **/
void	*ft_calloc(size_t elementCount, size_t elementSize);

/* Functions from     --------- <string.h> --------- library */

// BZERO: write zeroes to a byte string.
/**																	BZERO
 * @brief	Writes "n" zeroed bytes to the string "s".
 * 
 * @param s String.
 * @param n Number of bytes.
 * 
 * @return Nothing.
 **/
void	ft_bzero(void *s, size_t n);

// MEMSET: write byte to byte string.
/**																	MEMSET
 * @brief fills the first "count" bytes of the memory area pointed to 
 * by "ptr" with the byte "value".
 * 
 * @param ptr 	Destination memory.
 * @param value Character copied.
 * @param count 	Number of bytes to copy.
 * 
 * @return A pointer to the memory area "b".
 **/
void	*ft_memset(void *ptr, int value, size_t count);

// MEMCHR: locate byte in byte string.
/**																	MEMCHR
 * @brief Function scans the initial "size" bytes of the memory area 
 * pointed to by "memoryBlock" for the first instance of searchedChar.
 * Both "searchedChar" and the bytes of the memory area pointed to by 
 * "memoryBlock" are interpreted as unsigned char.
 * 
 * @param memoryBlock The memory area pointed.
 * @param searchedChar The element to search for in the function.
 * @param size Area to be scanned.
 * 
 * @return A pointer to the matching byte or 
 * @return NULL if the character does not occur in the given memory area.
 **/
void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);

// MEMCMP: compare byte string
/**																	MEMCMP
 * @brief Compares the first "size" bytes (each interpreted as unsigned 
 * char) of the memory areas pointed by pointer1 and pointer2.
 * 
 * @param pointer1 	First memory.
 * @param pointer2 	Second memory.
 * @param size 	Number of bytes to check.
 * 
 * @return If the first "size" bytes of pointer1 are different from pointer2, 
 * it will give a subtraction of both.
 * @return If size is zero, the return value is zero.
 **/
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);

// MEMMOVE: copy byte string.
/**																	MEMMOVE
 * @brief copy len bytes from memory area "src" to memory area "dest". 
 * The memory areas may overlap: copying takes place as though the bytes 
 * in "src" are first copied into a array that does not overlap "src" or 
 * "dest", and the bytes are then copied from the array to "dest".
 * 
 * @param dest 	Destination memory.
 * @param src 	Source memory.
 * @param n 	Number of bytes to copy.
 * 
 * @return A pointer to 'dest'.
 * @return If not have 'dest' and 'src', return zero.
 **/
void	*ft_memmove(void *dest, const void *src, size_t n);

// MEMCPY: copy memory area.
/**																	MEMCPY
 * @brief Copies n bytes from memory area src to memory area dest.
 * 
 * @param dest 	Destination memory.
 * @param src 	Source memory.
 * @param n 	Number of bytes to copy.
 * 
 * @return A pointer to dest.
 * @return If not have dst and src, return zero.
 **/
void	*ft_memcpy(void *dest, const void *src, size_t n);

// Functions from --------- <strings.h> --------- library 

// STRLEN: find lengt of string.
/**																	STRLEN
 * @brief	Returns the dimension of a string.
 * 
 * @param theString The string.
 * 
 * @return the number of characters that precede the terminating NULL character.
 **/
size_t	ft_strlen(const char *theString);

// STRCHR: locate character in string (first occurrence).
/**																	STRCHR
 * @brief Locates the character "searchedChar" in the string "string".
 * 
 * @param string 		String.
 * @param searchedChar 	The character to locate.
 * 
 * @return A pointer to the first occurrence of the character 'searchCharacter' 
 * in the string 'string'.
 **/
char	*ft_strchr(const char *string, int searchedChar);

// STRRCHR: locate character in string (last occurrence).
/**																	STRRCHR
 * @brief Locates the character "searchedChar" in the string "string" starting 
 * from the end.
 * 
 * @param string 		String.
 * @param searchedChar 	The character to locate.
 * 
 * @return A pointer to the last occurrence of the character "searchedChar" in 
 * the string "string".
 **/
char	*ft_strrchr(const char *string, int searchedChar);

// STRNSTR: locate a substring in a string (size-bounded).
/**																	STRNSTR
 * @brief Search for the first occurrence of the string "little" in the string 
 * "big" up to "len".
 * 
 * @param big		string from which to create the substring.
 * @param little	the index of the character "s" from which the substring starts.
 * @param len		maximum substring length.
 * 
 * @return	If the "little" is empty it returns "big".
 * @return	If "big" is empty or not found "little", returns NULL.
 * @return	A pointer to the first character of the first occurrence.
**/
char	*ft_strnstr(const char	*big, const char *little, size_t len);

// STRDUP: save a copy of a string (with malloc).
/**																	STRDUP
 * @brief 	Allocates sufficient memory for a copy of the string 'source'
 * 
 * @param source	String to be copied.
 * 
 * @return		A pointer to string.
 * **/
char	*ft_strdup(const char *source);

// STRLCPY: size-bounded string copying.
/**																	STRLCPY
 * @brief Copy strings with the same parameters up to 'dst' size.	
 * 
 * @param dst		Destination string.
 * @param src		Source string.
 * @param size		Size covered.
 * 
 * @return			The length of 'src'.
**/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

// STRLCAT: size-bounded string concatenation.
/**																	STRLCAT
 * @brief Concatenates strings with the same parameters up to 'size'.	
 * 
 * @param dst	Destination string.
 * @param src	Source string.
 * @param size	Size covered.
 * 
 * @return	The total length of the string they tried to create.
**/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

// STRNCMP: size-bounded string comparison.
/**																	STRNCMP
 * @brief Compares the strings up to "length" and returns the comparison of both 
 * strings.		
 * 
 * @param first		First string.
 * @param second	Second string.
 * @param length	maximum distance checked.
 * 
 * @return	If the first 'length' bytes of 'sfirst' are different from 'second', 
 * it will give a subtraction of both.
 * @return If ´length' is zero, the return value is zero.
**/
int		ft_strncmp(const char *first, const char *second, size_t length);

// Non-standard --------------------- functions

// PUTCHAR_FD: output a character to given file.
/**																	PUTCHAR_FD
 * @brief	Sends the character to the specified file descriptor.
 * 
 * @param c The character to send.
 * @param fd The file descriptor to write to.
 * 
 * @return Nothing.
 **/
void	ft_putchar_fd(char c, int fd);

// PUTSTR_FD: output string to given.
/**																	PUTSTR_FD
 * @brief	Sends the string to the specified file descriptor.
 * 
 * @param s The string to send.
 * @param fd The file descriptor to write to.
 * 
 * @return Nothing.
 **/
void	ft_putstr_fd(char *s, int fd);

// PUTENDL_FD: output string to given file with new line.
/**																	PUTENDL_FD
 * @brief	Sends the string to the specified file descriptor, followed 
 * by a line break.
 * 
 * @param s The string to send.
 * @param fd The file descriptor to write to.
 * 
 * @return Nothing.
 **/
void	ft_putendl_fd(char *s, int fd);

// PUTNBR_FD: output integer to given file.
/**																	PUTNBR_FD
 * @brief	Sends the number to the specified file descriptor.
 * 
 * @param n The number to send.
 * @param fd The file descriptor to write to.
 * 
 * @return Nothing.
 **/
void	ft_putnbr_fd(int n, int fd);

// ITOA: convert integer to ASCII string.
/** 																ITOA
 * @brief Using malloc(3), generate a string representing the integer value
 * received as argument. Negative numbers have to be handled.
 * 
 * @param n  the integer to be converted.
 * 
 * @return The string representing the number.
 * @return NULL if the memory reservation fails.
**/
char	*ft_itoa(int n);

// SUBSTR: extract substring from string.
/**																	SUBSTR
 * @brief		Reserves and returns a substring of the string. starts with 
 * "start" and of size len.
 * 
 * @param s		string from which to create the substring.
 * @param start	the index of the character "s" from which the substring starts.
 * @param len	maximum substring length.
 * 
 * @return		The substring or null if the memory reservation fails.
**/
char	*ft_substr(char const *s, unsigned int start, size_t len);

// STRTRIM: trim begining and end of string with the specified character.
/**																	STRTRIM
 * @brief 	Deletes all characters in the string 'set' from the beginning 
 * and from the end of 's1', until a character not belonging to 'set' is found.
 * 
 * @param s1	The string to be cut.
 * @param set	The characters to be removed from the string.
 * 
 * @return		The string with a malloc reservation
 * @return		If the memory backup fails, it is null.
**/
char	*ft_strtrim(char const *s1, char const *set);

// STRJOIN: concatenate two string strings into a new string (with mallloc).
/**																	STRJOIN
 * @brief 	Saves and returns a new string, formed by the concatenation 
 * of 's1' and 's2'.
 * 
 * @param s1	First string.
 * @param s2	The string to add followed by s1
 * 
 * @return		A new string with s1 and s2.
 * @return		If the memory backup fails, it is null.
**/
char	*ft_strjoin(char const *s1, char const *s2);

// SPLIT: split string, with specified character as delimiter, 
// an array of strings.
/**																	SPLIT
 * @brief reserves an array of strings resulting from separating the string 's'
 * into substrings using the character 'c' as delimiter.
 * 
 * @param s	The string to separate.
 * @param c	The delimiting character.
 * 
 * @return	The array of new strings resulting from the separation.
 * @return	If the memory backup fails, it is null.
 **/
char	**ft_split(char const *s, char c);

// STRMAPI: create new string from modifying string with specified function.
/** 																STRMAPI
 * @brief To each character of the string 's', apply the function 'f' 
 * giving as parameters the index of each character within 's' and the 
 * character itself. generates a new string with the result of the 
 * successive use of 'f'.
 * 
 * @param s	The string to iterate.
 * @param f	The function to be applied to each character.
 * 
 * @return The string created after the correct use of 'f' on each character.
 * @return NULL if the memory reservation fails.
**/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// STRITERI: applies a function to each character of the string passed 
// as argumet.
/** 																STRITERI
 * @brief To each character of the string 's', apply the function 'f' 
 * giving as parameters the index of each character within 's' and the 
 * address of the character itself, which can be changed if necessary.
 * 
 * @param s	The string to iterate.
 * @param f	The function to be applied to each character.
 * 
 * @return Nothing.
**/
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

// PART 2 					------- BONUS ------- 					

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

// create a new list.
/**																	LSTNEW
 * @brief	Create a new node with malloc and the 'content' variable is initialised
 * with the contents of the 'content' parameter and the 'next' with NULL.
 * 
 * @param content The content with which to create the node.
 * 
 * @return A new node.
 **/
t_list	*ft_lstnew(void *content);

// LSTSIZE: count elements of a list.
/**																	LSTSIZE
 * @brief	Counts the number of nodes in a list. 
 * 
 * @param lst The first node in the list.
 * 
 * @return The length of the list.
 **/
int		ft_lstsize(t_list *lst);

// LSTLAST: find last element of a list.
/**																	LSTLAST
 * @brief	Search and returns the last element in the list. 
 * 
 * @param lst The first element in the list.
 * 
 * @return The last element in the list.
 **/
t_list	*ft_lstlast(t_list *lst);

// LSTADD_BACK: add a new element at end of list.
/**																	LSTADD_BACK
 * @brief	Add the element 'new' to the end of the list 'alst'.
 * 
 * @param alst The first node in the list.
 * @param new A pointer to the node to add to the list.
 * 
 * @return Nothing.
 **/
void	ft_lstadd_back(t_list **alst, t_list *new);

// LSTADD_FRONT: add new element at begining of list.
/**																	LSTADD_FRONT
 * @brief	Add the node 'new' to the beginning of the list 'alst'. 
 * 
 * @param alst The address of a pointer to the first node in the list.
 * @param new A pointer to the node to add to the top of the list.
 * 
 * @return Nothing.
 **/
void	ft_lstadd_front(t_list **alst, t_list *new);

// delete element from list.
/**																	LSTDELONE
 * @brief	Take the element 'lst' and free the memory using the function 'del'
 * and also frees the list with free. Next memory is not freed. 
 * 
 * @param lst The element to be liberated.
 * @param del A pointer to the function used to free the content of the element.
 * 
 * @return Nothing.
 **/
void	ft_lstdelone(t_list *lst, void (*del)(void*));

// LSTCLEAR: delete sequence of elements of list from a starting point.
/**																	LSTCLEAR
 * @brief	Remove and free the node 'lst' and all consecutive nodes, using
 * the 'del' function and then free. The pointer to 'lst' must be NULL.
 * 
 * @param lst The pointer to the first node.
 * @param del A pointer to the function used to free the contents of each node.
 * 
 * @return Nothing.
 **/
void	ft_lstclear(t_list **lst, void (*del)(void*));

// LSTITER: apply function to content of all list's elements.
/**																	LSTITER
 * @brief	Iterate the list 'lst' and apply the function 'f' on the contents
 * of each element.
 * 
 * @param lst The pointer to the first element.
 * @param f A pointer to the function used in each element.
 * 
 * @return Nothing.
 **/
void	ft_lstiter(t_list *lst, void (*f)(void *));

// LSTMAP: apply function to content of all list's elements into new list.
/**																	LSTMAP
 * @brief	Iterate the list 'lst' and apply the function 'f' on the content
 * of each node. Creates a list resulting from the correct and successive 
 * application of the 'f' function on each node. The 'del' function will 
 * remove the contents of a node if necessary.
 * 
 * @param lst The pointer to a node.
 * @param f The address of a pointer to a function used in iterating of each
 * item in the list.
 * @param del A pointer to the function used to remove the content of the node
 * if necessary.
 * 
 * @return The new list.
 * @return Null if memory backup fails.
 **/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
