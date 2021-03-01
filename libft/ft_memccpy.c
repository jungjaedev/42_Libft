/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 03:59:32 by jajung            #+#    #+#             */
/*   Updated: 2021/02/04 04:01:00 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*str;
	size_t			i;

	tmp = (unsigned char*)dst;
	str = (unsigned char*)src;
	i = 0;
	if (!dst || !src)
		return (0);
	if (dst == src || !n)
		return (0);
	while (i < n)
	{
		tmp[i] = str[i];
		if (str[i] == (unsigned char)c)
			return (dst + (i + 1));
		i++;
	}
	return (0);
}
