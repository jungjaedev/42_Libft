/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:15:07 by jajung            #+#    #+#             */
/*   Updated: 2021/02/04 15:32:41 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (!(tmp = malloc(count * size)))
		return (NULL);
	ft_bzero(tmp, (count * size));
	return (tmp);
}
