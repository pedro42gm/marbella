/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:12:37 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:12:40 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Funtions from <ctype.h> library */
// lower case to upper case letter convertion.

int	ft_toupper(int charact)
{
	if (charact >= 'a' && charact <= 'z')
		charact -= 32;
	return (charact);
}
