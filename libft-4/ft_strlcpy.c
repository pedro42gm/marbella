/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:09:58 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:10:02 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Functions from <strings.h> library */
// size-bounded string copying.

size_t	ft_strlcpy( char *dst, const char *src, size_t size)
{
	size_t	i;
	int		res;

	i = 0;
	res = ft_strlen(src);
	if (size == 0)
		return (res);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > i)
		dst[i] = 0;
	return (res);
}
