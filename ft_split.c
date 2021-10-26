/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmai <fmai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:39:26 by fmai              #+#    #+#             */
/*   Updated: 2021/06/29 15:23:27 by fmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_element(char const *s, char c)
{
	int	cnt;
	int	i;
	int	len;

	if (s[0] != c)
		cnt = 1;
	else
		cnt = 0;
	i = 0;
	len = ft_strlen((char *)s);
	while (i < len)
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			cnt++;
		i++;
	}
	return (cnt);
}

static void	all_free(char *tmp, char *tmp2)
{
	free(tmp);
	free(tmp2);
}

static int	make_element(char **ret, char *s, char c, char **buf)
{
	char	*tmp;
	char	*tmp2;
	int		ret_index;
	int		str_cnt;

	str_cnt = ft_strlen(s);
	ret_index = 0;
	while (str_cnt-- > 0)
	{
		if (*s != c)
		{
			tmp = *buf;
			tmp2 = ft_substr(s, 0, 1);
			*buf = ft_strjoin(*buf, tmp2);
			all_free(tmp, tmp2);
		}
		else if (*buf != NULL)
		{
			ret[ret_index++] = ft_strdup(*buf);
			free(*buf);
			*buf = NULL;
		}
		s++;
	}
	return (ret_index);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		ret_index;
	char	*buf;

	if (s == NULL)
		return (NULL);
	ret = malloc(sizeof(char *) * (cnt_element(s, c) + 1));
	if (ret == NULL)
		return (NULL);
	buf = NULL;
	ret_index = make_element(ret, (char *)s, c, &buf);
	if (buf == NULL)
		ret[ret_index] = NULL;
	else
	{
		ret[ret_index] = ft_strdup(buf);
		free(buf);
		ret[ret_index + 1] = NULL;
	}
	return (ret);
}
