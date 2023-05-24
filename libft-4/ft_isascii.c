/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:02:17 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 11:43:05 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*																		ISASCII
Function from <ctype.h> library

The function ft_isascii checks if the input integer 'character' is a valid ASCII
character.

It checks whether the input 'character' lies within the ASCII value range of 
0 to 127. If this condition is true, the function immediately returns 1, meaning 
the character is a valid ASCII character.

If the condition isn't met, the function returns 0. This signifies that the 
character is not a valid ASCII character.
*/

int	ft_isascii(int character)
{
	if (character >= 0 && character <= 127)
		return (1);
	return (0);
}
