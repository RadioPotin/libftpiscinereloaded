/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:25:33 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/07 10:24:12 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hdr.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		error_out(1);
		return (0);
	}
	if (argc > 2)
		error_out(0);
	else
		ft_display_file(argv[1]);
	return (0);
}
