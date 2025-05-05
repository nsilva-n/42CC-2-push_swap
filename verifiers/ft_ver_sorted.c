/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:11:34 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/02/10 13:44:20 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_ver_sorted(t_stack *a_stack)
{
	int	i;

	i = a_stack->number;
	while (a_stack)
	{
		if (i > a_stack->number)
			return (0);
		i = a_stack->number;
		a_stack = a_stack->next;
	}
	return (1);
}
