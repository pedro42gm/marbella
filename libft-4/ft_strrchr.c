/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:11:18 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 12:15:42 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*									STRRCHR

*/

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)s;
	x = (char) c;
	while (i >= 0)
	{	
		if (str[i] == x)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
