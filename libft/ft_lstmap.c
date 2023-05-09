/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-gm <pedro-gm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:05:39 by pedro-gm          #+#    #+#             */
/*   Updated: 2023/04/18 19:05:49 by pedro-gm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*resfct;

	(void)del;
	if (!lst || !f)
		return (NULL);
	resfct = ft_lstnew(f(lst->content));
	if (!(resfct))
		return (NULL);
	res = resfct;
	lst = lst->next;
	while (lst)
	{
		resfct = ft_lstnew(f(lst->content));
		if (!(resfct))
		{
			ft_lstclear(&resfct, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&res, resfct);
	}
	return (res);
}
