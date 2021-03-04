/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:57:06 by jajung            #+#    #+#             */
/*   Updated: 2021/03/05 01:17:19 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	ptr = 0;
	if (s1 != 0 && s2 != 0)
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		ptr = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
		if (!ptr)
			return (NULL);
		if (s1)
			ft_strlcpy(ptr, s1, len_s1 + 1);
		else
			ft_strlcpy(ptr, s2, len_s2 + 1);
		if (s1 && s2)
			ft_strlcat(ptr, s2, len_s1 + len_s2 + 1);
	}
	return (ptr);
}
