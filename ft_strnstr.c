/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenoztur <kenoztur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 03:37:43 by kenoztur          #+#    #+#             */
/*   Updated: 2026/08/16 03:53:03 by kenoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;

	if (!little[0])
		return ((char *)big);
	while (*big && len > 0)
	{
		i = 0;
		while (little[i] == big[i] && little[i] && len - i > 0)
			i++;
		if (little[i] == '\0')
			return ((char *) big);
		len--;
		big++;
	}
	return (NULL);
}
