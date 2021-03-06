/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 18:06:38 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/22 18:12:08 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);
t_list				*ft_list_last(t_list *begin_list);
t_list				*ft_list_at(t_list *begin_list, unsigned int nbr);
void				ft_list_push_back(t_list **begin_list, void *data);
void				ft_list_push_front(t_list **begin_list, void *data);
void				ft_list_clear(t_list **begin_list);
void				ft_list_reverse(t_list **begin_list);
void				ft_list_foreach(t_list *begin_list, void (*f)(void *));
void				ft_list_reverse(t_list **begin_list);
int					ft_list_size(t_list *begin_list);

#endif
