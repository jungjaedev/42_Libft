/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 04:01:50 by jajung            #+#    #+#             */
/*   Updated: 2021/02/04 04:03:39 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;

	if (dst == src || n == 0)
		return (dst);
	if (dst < src)
	{
		new_dst = (unsigned char*)dst;
		new_src = (unsigned char*)src;
		while (n--)
			*new_dst++ = *new_src++;
	}
	else
	{
		new_dst = (unsigned char*)dst + (n - 1);
		new_src = (unsigned char*)src + (n - 1);
		while (n--)
			*new_dst-- = *new_src--;
	}
	return (dst);
}
