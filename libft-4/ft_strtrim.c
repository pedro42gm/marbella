/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:12:20 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 12:15:53 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*								STRTRIM

*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	fin;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	fin = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (fin > i && ft_strrchr(set, s1[fin]))
		fin--;
	return (ft_substr(s1, i, fin - i + 1));
}
