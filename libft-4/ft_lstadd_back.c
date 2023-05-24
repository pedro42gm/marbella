/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:03:58 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:04:03 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*																	LSTADD_BACK 
Function not standard
ft_lstadd_back: add a new element at end of list.

The function ft_lstadd_back takes two arguments: 
1.- 'alst', a pointer to a pointer to the first element of the list, 
2.- and 'new', a pointer to the new element to be added.

Inside the function, a temporary variable 'tmp' of type t_list* is declared.

The function first checks if the pointer to the first element of the list 
(*alst) is NULL. If it is, it means the list is empty, and the new element 
becomes the first element by assigning it to *alst.
If the list is not empty, the function calls ft_lstlast to find the last element
and returns a pointer to it.
The next pointer of the last element (tmp->next) is then set to the new element,
effectively adding it at the end of the list.

The purpose of the ft_lstadd_back function is to add a new element to the end of
a linked list. It handles both cases where the list is empty and when it already
has elements. By using the next pointers in the list nodes, it correctly updates
the links to include the new element at the end of the list.
*/

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (*alst == NULL)
		*alst = new;
	else
	{
		tmp = ft_lstlast(*(alst));
		tmp->next = new;
	}
}
