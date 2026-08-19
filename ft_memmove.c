/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenoztur <kenoztur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 15:37:33 by kenoztur          #+#    #+#             */
/*   Updated: 2026/08/19 18:27:39 by kenoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (s1 < s2)
	{
		while (i++ < n)
			s1[i] = s2[i];
	}
	else
	{
		i = n;
		while (i-- > 0)
			s1[i] = s2[i];
	}
	return (dest);
}
