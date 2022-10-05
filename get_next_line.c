/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 04:13:44 by gmoreira          #+#    #+#             */
/*   Updated: 2022/09/25 21:01:09 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_gnl_strchr(const char *str)
{
	char	*ptr;

	ptr = (char *)str;
	while (*ptr)
	{
		if (*ptr == '\n' || *ptr == '\0')
			return (ptr);
		ptr++;
	}
	return (NULL);
}

static char	*get_n_save(char *ans, int fd)
{
	static char	*save[256];
	char		*word;
	char		*temp;
	int			len;

	if (!ans)
		return (NULL);
	if (save[fd])
	{
		temp = ft_gnl_strjoin(save[fd], ans);
		free(ans);
		ans = NULL;
		ans = temp;
		free(save[fd]);
		save[fd] = NULL;
	}
	len = ft_gnl_strchr (ans) - ans;
	word = ft_substr (ans, 0, len + 1);
	save[fd] = ft_substr (ans, len + 1, ft_strlen (ans));
	free (ans);
	return (word);
}

static char	*read_line(int fd, char *line)
{
	char	*ans;
	char	*temp;
	int		ret;

	ret = read(fd, line, BUFFER_SIZE);
	if (ret == -1)
	{
		free(line);
		return (NULL);
	}
	ans = malloc(1 * sizeof(char));
	*ans = 0;
	while (ret && !(ret == -1))
	{
		line[ret] = '\0';
		temp = ft_gnl_strjoin(ans, line);
		free(ans);
		ans = temp;
		if (ft_gnl_strchr(ans))
			break ;
		ret = read(fd, line, BUFFER_SIZE);
	}
	free(line);
	line = NULL;
	return (ans);
}

char	*get_next_line(int fd)
{
	char	*ans;
	char	*line;

	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (NULL);
	*line = 0;
	ans = read_line (fd, line);
	if (!ans || !*ans)
		return (NULL);
	ans = get_n_save (ans, fd);
	if (!ans || !*ans)
		return (NULL);
	return (ans);
}
