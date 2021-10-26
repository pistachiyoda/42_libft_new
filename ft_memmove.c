/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:32:39 by fmai              #+#    #+#             */
/*   Updated: 2020/11/15 18:05:12 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*mem1;
	char	*mem2;

	if (dst == NULL && src == NULL)
		return (dst);
	mem1 = (char *)dst;
	mem2 = (char *)src;
	if (mem1 < mem2)
	{
		while (n--)
			*mem1++ = *mem2++;
	}
	else
	{
		mem1 += n - 1;
		mem2 += n - 1;
		while (n--)
			*mem1-- = *mem2--;
	}
	return (dst);
}
