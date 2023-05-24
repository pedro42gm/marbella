/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:01:21 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:01:27 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*																		  CALLOC 
Function from <stdlib.h> library

The ft_calloc function allocates memory for an array and initializes it to zero.

The function takes two arguments: 
1.- 'elementCount' (representing the number of elements to allocate) 
2.- and 'elementSize' (representing the size of each element).

Inside the function, a variable 'res' of type char* is declared to store the 
pointer to the allocated memory block.

Memory is allocated using malloc by multiplying 'elementCount' by 'elementSize', 
which determines the total size in bytes needed for the memory block. If the 
allocation fails, NULL is returned.

If the memory allocation is successful, the ft_bzero function is called to 
initialize the allocated memory with zeroes.

Finally, the function returns the pointer 'res', which points to the allocated 
memory block and zero-initialized it.

This function is commonly used when initializing data structures or when 
allocating memory for arrays that need to be zero-initialized before use.
*/

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	char	*res;

	res = malloc(elementSize * elementCount);
	if (!res)
		return (NULL);
	ft_bzero(res, elementSize * elementCount);
	return (res);
}
