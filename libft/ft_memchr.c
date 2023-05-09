/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:06:31 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:06:36 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned char	*strtosrc;
	size_t			i;

	strtosrc = (unsigned char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (*strtosrc == (unsigned char)searchedChar)
			return (strtosrc);
		strtosrc++;
		i++;
	}
	return (NULL);
}
