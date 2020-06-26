/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmosiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:02:14 by kmosiane          #+#    #+#             */
/*   Updated: 2020/06/25 14:07:40 by kmosiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
	int result;
	result = nb;
	while(power > 1)
	{
	result = result * nb;
	power--;
}
return(result);
}
