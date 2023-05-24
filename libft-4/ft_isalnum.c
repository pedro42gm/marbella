/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:01:39 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 11:42:43 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 																		ISALNUM
Function from <ctype.h> library 

The function ft_isalnum checks if the input character is alphanumeric.

In the first if statement, it checks whether the input character lies within 
the ASCII value range of lowercase letters (a-z) or uppercase letters (A-Z). 

If the condition is true, the function immediately returns 1, meaning the 
character is alphanumeric.

If the first condition isn't met, the function moves to the second if statement.
Here it checks if the input character lies within the ASCII value range of digits
(0-9). If this condition is true, it again returns 1.

If neither condition is met, i.e., the character is neither a letter nor a digit,
the function returns 0. This signifies that the character is not alphanumeric.
*/

int	ft_isalnum( int character )
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
		return (1);
	if (character >= '0' && character <= '9')
		return (1);
	return (0);
}
