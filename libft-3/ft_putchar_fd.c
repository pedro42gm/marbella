/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:07:33 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:07:43 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Non-standard functions */
// output a character to given file.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
