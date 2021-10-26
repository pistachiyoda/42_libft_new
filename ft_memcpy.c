/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:32:39 by fmai              #+#    #+#             */
/*   Updated: 2020/11/23 17:44:54 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;

	if (dst == NULL && src == NULL)
		return (dst);
	mem1 = (unsigned char *)dst;
	mem2 = (unsigned char *)src;
	while (n)
	{
		*mem1 = *mem2;
		mem2++;
		mem1++;
		n--;
	}
	return (dst);
}
