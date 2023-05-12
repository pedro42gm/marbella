/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:09:03 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:09:08 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Functions from <strings.h> library */
// save a copy of a string (with malloc).

char	*ft_strdup(const char *source)
{
	char	*mall;
	int		i;

	mall = malloc(sizeof(char) * (ft_strlen(source) + 1));
	if (!mall)
		return (NULL);
	i = 0;
	while (source[i])
	{
		mall[i] = source[i];
		i++;
	}
	mall[i] = 0;
	return (mall);
}
