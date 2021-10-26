/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:27:45 by fmai              #+#    #+#             */
/*   Updated: 2021/05/30 17:02:12 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_matched(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen((char *)set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	process_beginning(char **s1, char const *set, size_t *len)
{
	while (1)
	{
		if (**s1 == '\0')
			return (0);
		if (!is_matched(**s1, set))
			break ;
		(*len)--;
		(*s1)++;
	}
	return (1);
}

void	process_end(char *s1, char const *set, size_t *len)
{
	while (1)
	{
		if (!is_matched(*(s1 + *len - 1), set))
			break ;
		(*len)--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*trimmed_str;
	char	*start;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen((char *)s1);
	if (!process_beginning((char **)&s1, set, &len))
		return (ft_strdup(""));
	start = (char *)s1;
	process_end((char *)s1, set, &len);
	trimmed_str = (char *)malloc(sizeof(char) * (len + 1));
	if (trimmed_str == NULL)
		return (NULL);
	ft_memcpy(trimmed_str, start, len);
	*(trimmed_str + len) = '\0';
	return (trimmed_str);
}
