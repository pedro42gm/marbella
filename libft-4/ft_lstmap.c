/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:19:39 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/05/24 13:06:43 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*firstlst;
	void	*content;

	firstlst = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		newlst = ft_lstnew(content);
		if (!newlst)
		{
			del(content);
			while (firstlst)
			{
				newlst = firstlst->next;
				del(firstlst->content);
				free(firstlst);
				firstlst = newlst;
			}
			return (NULL);
		}
		ft_lstadd_back(&firstlst, newlst);
		lst = lst->next;
	}
	return (firstlst);
}
