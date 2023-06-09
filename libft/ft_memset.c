/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dly <dly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:14:03 by dly               #+#    #+#             */
/*   Updated: 2022/11/28 13:52:45 by dly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;

	if (!s)
		return (NULL);
	tmp = s;
	while (n > 0)
	{
		*tmp = c;
		tmp++;
		n--;
	}
	return (s);
}
