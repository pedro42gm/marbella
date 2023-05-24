/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:41:28 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 16:50:49 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 																		   BZERO
Function from <string.h> library

The function ft_bzero takes a pointer to the memory block 's' and the number of 
bytes 'n' as input. It writes zeroes to the first 'n' bytes of the memory block.

Inside the function, a variable 'str' of type char* is created and initialized 
with the value of the input pointer 's'. This allows treating the memory block 
as an array of characters.

A loop is used to iterate 'i' from 0 to n-1, representing the indices of the 
bytes in the memory block.

In each iteration, the character at the current index str[i] is set to the null
character '\0', effectively writing a zero byte.

After 'n' iterations, the loop finishes and the function returns. The memory 
block 's' has been modified, with the first 'n' bytes filled with null 
characters.

The purpose of the ft_bzero function is to initialize or clear out a block of 
memory, often used before storing new data in it. It is commonly used to set 
string buffers or other data structures to an initial state.
*/

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
