/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sha224_update.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonhomm <fbonhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:42:10 by fbonhomm          #+#    #+#             */
/*   Updated: 2018/11/17 18:43:16 by fbonhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ssl.h>

void			sha224_update(void *ctx, unsigned char *data, size_t len)
{
	uint32_t	i;
	t_sha224	*s;

	s = ctx;
	i = 0;
	while (i < len)
	{
		s->data[s->datalen] = data[i];
		s->datalen++;
		if (s->datalen == 64)
		{
			sha224_transform(s, s->data);
			s->bitlen += 512;
			s->datalen = 0;
		}
		i++;
	}
}
