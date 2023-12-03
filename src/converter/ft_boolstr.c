/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odudniak <odudniak@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:26:10 by odudniak          #+#    #+#             */
/*   Updated: 2023/12/03 18:22:43 by odudniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_boolstr(bool value)
{
	if (value)
		return (COLOR_GREEN"true"COLOR_R);
	return (COLOR_RED"false"COLOR_R);
}
