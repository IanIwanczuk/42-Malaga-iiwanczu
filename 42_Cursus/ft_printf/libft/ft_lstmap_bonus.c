/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:42:51 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/07 17:16:41 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// -------------------------------------------------------
// lst --> Un puntero a un nodo.
// -------------------------------------------------------
// f --> La dirección de un puntero a una función usada
// en la iteración de cada elemento de la lista.
// -------------------------------------------------------
// del --> Un puntero a función utilizado para eliminar
// el contenido de un nodo, si es necesario.
// -------------------------------------------------------
// Itera la lista ’lst’ y aplica la función ’f’ al
// contenido de cada nodo. Crea una lista resultante
// de la aplicación correcta y sucesiva de la función
// ’f’ sobre cada nodo. La función ’del’ se utiliza
// para eliminar el contenido de un nodo, si hace
// falta.
// -------------------------------------------------------

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	new_list = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
