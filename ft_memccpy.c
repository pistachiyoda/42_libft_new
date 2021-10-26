/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 22:23:32 by fmai              #+#    #+#             */
/*   Updated: 2020/11/26 11:15:04 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;

	mem1 = (unsigned char *)dst;
	mem2 = (unsigned char *)src;
	while (n)
	{
		if (*mem2 == (unsigned char)c)
		{
			*mem1 = *mem2;
			mem1++;
			return (mem1);
		}
		*mem1 = *mem2;
		mem2++;
		mem1++;
		n--;
	}
	return (NULL);
}
