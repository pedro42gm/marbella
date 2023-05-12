/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:11:02 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:11:12 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Functions from <strings.h> library */
// locate character in string (last occurrence).

char	*ft_strrchr( const char *string, int searchedChar )
{
	int	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == searchedChar)
			return ((char *)string + i);
		i--;
	}
	return (NULL);
}
