/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:11:26 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:11:36 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Non-standard functions */
// trim begining and end of string with the specified character.

static int	is_white_space(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		y;
	int		x;
	int		max;
	char	*res;

	i = 0;
	y = 0;
	x = 0;
	res = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!res)
		return (NULL);
	max = ft_strlen(s1);
	while (is_white_space(s1[i], set) == 1)
		i++;
	while (is_white_space(s1[max - 1], set) == 1)
		max--;
	while (i < max)
		res[x++] = s1[i++];
	res[x] = '\0';
	return (res);
}
