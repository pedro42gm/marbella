/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:22:53 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 18:23:04 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 																			ATOI
Functions from <stdlib.h> library

The function ft_atoi takes a pointer to a null-terminated string str as input 
and returns the converted integer value.

Several variables are declared: 
1.- 'i' to keep track of the current position in the string, 
2.- 'res' to store the resulting integer value, 
3.- and 'signe' to keep track of the sign of the number.

The loop while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' ')) skips any 
leading whitespace characters by checking if the current character is a space 
(ASCII code 32) or falls within the range of ASCII codes 9 to 13 (which 
represent control characters like tab and newline).
If the next character encountered is a minus sign '-', the variable signe is 
multiplied by -1 to toggle the sign and the loop continues to the next character.
If the next character encountered is a plus sign '+', it is simply skipped by 
incrementing i.

The loop while (str[i] >= '0' && str[i] <= '9') continues until a non-digit 
character is encountered. It multiplies the current value of res by 10 and adds 
the numeric value of the current digit character by subtracting the ASCII value 
of '0' (48).

Finally, the resulting integer value res is multiplied by signe to account for 
the sign of the number and returned.
The code essentially iterates through the string, skipping any leading 
whitespace characters, handling the sign, and converting the numeric characters 
to an integer value.
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	signe;

	i = 0;
	signe = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * signe);
}
