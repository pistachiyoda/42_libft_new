/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 21:09:34 by fmai              #+#    #+#             */
/*   Updated: 2020/11/26 11:38:20 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		str_cnt;
	char	*malloc_p;
	int		i;

	str_cnt = ft_strlen(src);
	malloc_p = (char *)malloc(sizeof(char) * str_cnt + 1);
	if (malloc_p == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		malloc_p[i] = src[i];
		i++;
	}
	malloc_p[i] = '\0';
	return (malloc_p);
}
