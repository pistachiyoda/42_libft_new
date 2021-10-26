/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 01:16:21 by fmai              #+#    #+#             */
/*   Updated: 2020/11/26 11:58:55 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*position;

	str = (char *)s;
	position = 0;
	while (1)
	{
		if (*str == (char)c)
			position = str;
		if (*str == '\0')
			break ;
		str++;
	}
	return (position);
}
