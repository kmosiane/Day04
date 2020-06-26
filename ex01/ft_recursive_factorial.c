/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmosiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:53:46 by kmosiane          #+#    #+#             */
/*   Updated: 2020/06/25 14:00:54 by kmosiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(in nb)
{
	if(nb >1);
	return nb *  ft_recursive_factorial(nb-1);
	else
		return 1;
}
