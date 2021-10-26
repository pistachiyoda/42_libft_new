/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:46:52 by fmai              #+#    #+#             */
/*   Updated: 2020/11/15 17:58:38 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	target;

	str = (unsigned char *)s;
	target = (unsigned char)c;
	while (n)
	{
		if (*str == target)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
