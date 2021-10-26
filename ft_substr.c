/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 22:47:28 by fmai              #+#    #+#             */
/*   Updated: 2021/05/30 17:03:16 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	char			*ret;
	unsigned int	str_len;
	unsigned int	substr_len;

	if (s == NULL)
		return (NULL);
	str_len = (unsigned int)ft_strlen((char *)s);
	if (str_len > (unsigned int)len)
		substr_len = (unsigned int)len;
	else
		substr_len = str_len;
	if (str_len < start)
		return (ft_strdup(""));
	substr = (char *)malloc(sizeof(char) * (substr_len + 1));
	if (substr == NULL)
		return (NULL);
	ret = substr;
	s += start;
	while (substr_len--)
		*substr++ = *s++;
	*substr = '\0';
	return (ret);
}
