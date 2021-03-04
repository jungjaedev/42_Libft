/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 03:59:32 by jajung            #+#    #+#             */
/*   Updated: 2021/03/04 23:51:27 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*str;
	size_t			i;

	tmp = (unsigned char *)dst;
	str = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmp[i] = str[i];
		if (str[i] == (unsigned char)c)
			return ((void*)dst + i + 1);
		i++;
	}
	return (0);
}
