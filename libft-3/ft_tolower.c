/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:12:26 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:12:29 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Funtions from <ctype.h> library */
// upper case to lower case letter convertion.

int	ft_tolower(int charact)
{
	if (charact >= 'A' && charact <= 'Z')
		charact += 32;
	return (charact);
}
