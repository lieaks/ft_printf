/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dly <dly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:11:04 by dly               #+#    #+#             */
/*   Updated: 2022/12/02 17:21:40 by dly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int n, t_sc *sc)
{
	char	*str;

	str = ft_itoa(n);
	if (!str)
		return ;
	ft_print_str(str, sc);
	if (str)
		free(str);
}
