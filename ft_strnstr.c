/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 01:19:12 by fmai              #+#    #+#             */
/*   Updated: 2020/11/22 20:42:08 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*target;
	size_t	c_len;

	target = (char *)haystack;
	c_len = ft_strlen((char *)needle);
	if (c_len <= 0)
		return (target);
	if (len <= 0)
		return (NULL);
	while (len)
	{
		if (*target == '\0' || len < c_len)
			return (NULL);
		if (ft_strncmp(target, needle, c_len) == 0)
			return (target);
		target++;
		len--;
	}
	return (NULL);
}
