/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:13:40 by fmai              #+#    #+#             */
/*   Updated: 2020/11/23 17:45:22 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	if (src == NULL || dst == NULL)
		return (0);
	len = ft_strlen((char *)src);
	if (dstsize <= 0)
		return (len);
	dstsize -= 1;
	i = 0;
	while (dstsize)
	{
		if (src[i] == '\0')
			break ;
		dst[i] = src[i];
		dstsize--;
		i++;
	}
	dst[i] = '\0';
	return (len);
}
