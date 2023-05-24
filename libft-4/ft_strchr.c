/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:59:52 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 12:15:30 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*								                                        STRCHR

*/

char	*ft_strchr(const char *s, int c)
{
	char	x;
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	x = (char) c;
	while (s[i] != x)
	{	
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (&str[i]);
}
