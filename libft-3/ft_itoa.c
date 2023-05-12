/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:03:43 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:03:47 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*																		    ITOA 
Non-standard functions
convert integer to ASCII string.
*/

/**
 * @brief The ft_array is a helper function that is called to populate the 
 * remaining characters of the string. It takes x, number, and len as arguments 
 * and iteratively divides number by 10 to extract the rightmost digit, converts
 * it to ASCII by adding 48 ('0'), and assigns it to x[len--]. This process 
 * continues until all the digits of 'number' have been processed.
 * 
 * @param x			to store the resulting string 
 * @param number	to store the absolute value of n	
 * @param len		to store the length of the string
 * 
 * @return the new string "x" with ASCII characters
*/
static char	*ft_array(char *x, unsigned int number, long int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (x);
}

/**
 * @brief The function ft_len is a helper function that calculates the number of 
 * digits in the integer value of n. It iteratively divides n by 10 until it 
 * becomes zero and increments a counter variable len in each iteration. It also 
 * takes care of the case when n is negative by initializing len to 1 if n is 
 * less than or equal to 0.
 * 
 * @param n The integer.
 * 
 * @return The number of cells the memory will have for the integer.
 **/
static long int	ft_len(int n)
{
	int					len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

/*
The function ft_itoa takes an integer n as input and returns a pointer to a 
newly allocated string containing the ASCII representation of n.

Several variables are declared: 
1.- 'x' to store the resulting string, 
2.- 'len' to store the length of the string, 
3.- 'number' to store the absolute value of n, 
4.- and 'sign' to keep track of the sign of n.

The length of the string is calculated by calling ft_len(n) and stored in the 
len variable.

Memory is allocated to x using malloc to accommodate the string of length len 
+ 1 (including space for the null terminator). If the allocation fails, NULL is 
returned.

The null terminator is placed at the end of the string by assigning '\0' to 
x[len--].

If n is zero, the first character of the string is set to '0'. If n is negative, 
the sign is stored in sign, the absolute value of n is stored in number, and the 
first character of the string is set to '-'.

The ft_array function is called to populate the remaining characters of the 
string. It takes x, number, and len as arguments and iteratively divides number 
by 10 to extract the rightmost digit, converts it to ASCII by adding 48 ('0'), 
and assigns it to x[len--]. This process continues until all the digits of 
number have been processed.

Finally, the resulting string x is returned.
*/

char	*ft_itoa(int n)
{
	char				*x;
	long int			len;
	unsigned int		number;
	int					sign;

	sign = 1;
	len = ft_len(n);
	x = (char *)malloc(sizeof(char) * (len + 1));
	if (!(x))
		return (NULL);
	x[len--] = '\0';
	if (n == 0)
		x[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		x[0] = '-';
	}
	else
		number = n;
	x = ft_array(x, number, len);
	return (x);
}
