/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:08:38 by fmai              #+#    #+#             */
/*   Updated: 2020/11/25 17:48:10 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	ret;

	dst_len = ft_strlen((char *)dst);
	src_len = ft_strlen((char *)src);
	ret = dst_len + src_len;
	i = 0;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while (dstsize - dst_len - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		dstsize--;
		i++;
	}
	dst[dst_len + i] = '\0';
	return (ret);
}
