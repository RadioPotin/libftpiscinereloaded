/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:03:18 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/07 09:24:39 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hdr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}