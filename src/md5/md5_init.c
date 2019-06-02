/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md5_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonhomm <fbonhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 17:55:47 by fbonhomm          #+#    #+#             */
/*   Updated: 2018/12/03 17:54:24 by fbonhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ssl.h>

void	md5_init(void *ctx)
{
	t_md5	*m;

	m = ctx;
	m->datalen = 0;
	m->bitlen[0] = 0;
	m->bitlen[1] = 0;
	m->state[0] = 0x67452301;
	m->state[1] = 0xefcdab89;
	m->state[2] = 0x98badcfe;
	m->state[3] = 0x10325476;
}
