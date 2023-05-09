/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:01:39 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:01:46 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum( int character )
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
		return (1);
	if (character >= '0' && character <= '9')
		return (1);
	return (0);
}
