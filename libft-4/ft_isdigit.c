/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:40:10 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 20:53:11 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*																		ISDIGIT 
Functions from <ctype.h> library

The function ft_isdigit checks if the input character is a digit (0-9).

It checks whether the input character lies within the ASCII value range of digits
(0-9). If the condition is true, the function immediately returns 1, meaning 
the character is a digit.

If the condition isn't met, the function returns 0. This signifies that the 
character is not a digit.
*/

int	ft_isdigit(int character)
{
	if (character >= '0' && character <= '9')
		return (1);
	return (0);
}
