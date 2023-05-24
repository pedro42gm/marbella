/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:04:13 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:04:17 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Function not standard

The funtion ft_lstadd_front adds a new element to the front of a linked list.
It takes two parameters: 
1.- alst, a pointer to a pointer of the head of the linked list, 
2.- and new, a pointer to the new element to be added to the front of the list.

The condition if (alst && new) checks if both alst and new are not NULL. 
This is a safety measure to ensure that valid pointers are provided as arguments.

Inside the condition, the next pointer of the new element is set to the current 
head of the linked list. This makes the new element the new head of the list.

Finally, the value of *alst is updated to new, which effectively makes new the 
new head of the linked list.

In summary, the function adds a new element to the front of a linked list by 
updating the necessary pointers.
*/

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
