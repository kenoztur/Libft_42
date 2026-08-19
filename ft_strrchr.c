/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenoztur <kenoztur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 03:19:25 by kenoztur          #+#    #+#             */
/*   Updated: 2026/08/16 03:19:28 by kenoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		len;

	ch = (char)c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] >= ch)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
