/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limry <limry@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 18:02:36 by limry             #+#    #+#             */
/*   Updated: 2020/02/28 18:02:36 by limry            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

void		ft_putstr(char const *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}
