/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:03:43 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 11:54:36 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*																		    ITOA 
Non-standard function

The ft_itoa function converts an integer to ASCII string representation by 
utilizing the ft_len function to calculate the length and the ft_array function 
to convert the number into a character array.

The ft_array function takes three parameters: 
1.- a pointer to a character array x, 
2.- an unsigned integer number, 
3.- and a long integer len. 
 
It converts the given number into a character array and returns the modified 
array x. This function was explained in the previous response.

The ft_len function takes an integer n and calculates the length of the integer 
when represented as a string. It returns a long integer representing the length.

The variable len is initialized to 0.

If n is less than or equal to 0, len is set to 1. This takes into account the 
negative sign if n is negative or the single digit '0' if n is zero.

A while loop is used to increment len by 1 for each digit in n. The loop 
continues until n becomes 0, dividing n by 10 in each iteration to remove the 
rightmost digit.

Finally, the function returns the value of len.

The ft_itoa function takes an integer n and converts it into a string 
representation. It returns a pointer to the resulting character array x.

This function declares variables: 
1.- x (a character pointer), 
2.- len (a long integer), 
3.- number (an unsigned integer), 
4.- and sign (an integer) to store intermediate values.

The function calculates the length of the string representation of n by calling 
ft_len(n) and assigns it to len.

Memory is allocated for the character array x using malloc, with a size of len 
+ 1 to accommodate the string and a null-terminating character.

If the allocation fails, the function returns NULL.

The null-terminating character is assigned to the last element of x (x[len--] = 
'\0'), and the len variable is decremented.

If n is 0, the character '0' is assigned to the first element of x (x[0] = '0').

If n is negative, the sign variable is set to -1, the number variable is assigned
the absolute value of n (number = n * -1), and the negative sign is assigned to 
the first element of x (x[0] = '-').

If n is positive or zero, the number variable is assigned n.

The ft_array function is called, passing x, number, and len as arguments. This 
function modifies the x array to store the digits of number.

Finally, the function returns the pointer to the resulting character array x.
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
