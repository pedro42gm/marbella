/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:01:59 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 11:42:55 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 																		ISALPHA
Function from <ctype.h> library

The function ft_isalpha checks if the input character is an alphabet letter 
lowercase letter (a-z) or an uppercase letter (A-Z).

It checks whether the input character lies within the ASCII value range of
lowercase letters (a-z) or uppercase letters (A-Z). If the condition is true,
the function immediately returns 1, meaning the character is an alphabet letter.
If the condition isn't met, the function returns 0. This signifies that the
character is not an alphabet letter.
*/
int	ft_isalpha(int character)
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
		return (1);
	return (0);
}
