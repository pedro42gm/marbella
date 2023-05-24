/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:03:25 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 11:43:31 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*																	ISPRINT
Function from <ctype.h> library 

The function ft_isprint is checking if the input integer corresponds to a 
printable character in the ASCII table.

It checks if the character falls within the range of printable ASCII characters.

If the condition is true, the function returns 1, indicating that the character 
is printable.

If the condition is false, the function reaches the return (0) statement, 
indicating that the character is not printable.
*/

int	ft_isprint(int character)
{
	if (character >= 32 && character < 127)
		return (1);
	return (0);
}
