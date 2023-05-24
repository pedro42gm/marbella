/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:36:07 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 11:47:44 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//																		SPLIT
/*
Non-standard function 

The  ft_split function in this code include helper functions. This function is 
typically used to split a string 's' into an array of strings (or "words") 
based on a specified character 'c'. This process is called tokenizing.

The helper functions are: 

1.- ft_wordcounter() is used to count the number of words in the string s. A 
word is defined as a sequence of characters that doesn't include the 
character 'c'. This function is used to determine the size of the array that 
needs to be dynamically allocated in ft_split().

2.- ft_len() returns the length of a "word" in the string 's'. A "word" here 
is defined as a sequence of characters that doesn't include the character 'c'.

3.- ft_free() is to free a dynamically allocated 2D string array. It is used to
free the allocated memory in case of an error (e.g., if the memory allocation 
for a word fails in ft_make_cells()).

4.- ft_make_cells() populates the allocated array with words. It iterates over 
the string, creates substrings when it finds words, and assigns them to the 
array. If memory allocation for a word fails, it frees the whole array and 
returns NULL.

5.- ft_split() is the main function. It first allocates memory for the array 
of words using the count of words computed by ft_wordcounter(). Then it uses 
ft_make_cells() to fill this array with words from the string 's'.

It calls ft_substr() function for creates a new string which is a substring 
of the given string, starting at a specified index and of a specified length.

This code performs dynamic memory allocations, and the caller of ft_split() 
is responsible for freeing the memory when it's no longer needed to avoid 
memory leaks. Its would also be careful to handle the NULL return case 
correctly to avoid segmentation faults.

The  ft_substr and ft_calloc functions creating a substring and allocating 
memory for an array, respectively.
*/

/**
 * @brief This function runs through the string counting how many sections the 
 * memory pool must have to hold the string in memory. memory cache has to have 
 * in order to hold the string in memory.
 * 
 * @param s The original string.
 * @param c The delimiting character
 * 
 * @return The number of cells the memory will have.
 **/
static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			w++;
		}
		else
			i++;
	}
	return (w);
}

/**
 * @brief This function will traverse the string until it reaches the delimiter
 * or null. It will start at the position of the pointer you give it to count 
 * each section independently.
 * 
 * @param s The original string.
 * @param c The delimiting character
 * 
 * @return The dimension that each memory cell will have to occupy.
**/
static size_t	ft_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
				len++;
				s++;
	}
	return (len);
}

/**
 * @brief This function runs through and frees each memory cell, ending with 
 * the freeing of the large memory cache.
 * 
 * @param str The complete memory.
 * 
 * @return Nothing, as it destroys the memory cache.
**/
static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

/**
 * @brief This function will traverse the string and when it reaches each 
 * element, it calculates its dimension and we move the string to that 
 * position to speed it up. At the memory location we run an ft_substr to 
 * insert the corresponding string into the memory cell. We check if it has
 * been saved correctly and  we continue until we write the last cell where
 * a NULL character was inserted.
 * 
 * @param str The memory reserve.
 * @param s The original string.
 * @param c The delimiting character
 * 
 * @return The dimension that each memory cell will have to occupy.
**/
static char	**ft_make_cells(char **str, char *s, char c)
{
	size_t	len;
	size_t	n;

	n = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = ft_len(s, c);
			s = s + len;
			str[n] = ft_substr(s - len, 0, len);
			if (str[n] == NULL)
			{
				ft_free(str);
				return (NULL);
			}
			n++;
		}
		else
			s++;
	}
	str[n] = NULL;
	return (str);
}

/*
We create the memory pool of type char **. Its size shall be char * and 
the number of fragments it has calculated with the ft_wordcounter function
plus 1 to consider the last cell to be null. 
We check that it has been created correctly or we have been given the 
string, otherwise it would be null. 
Once everything is correct, in the return the main function will start 
to fill each cell with its corresponding substring.
*/

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!str || !s)
		return (NULL);
	return (ft_make_cells(str, (char *)s, c));
}
