/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:02:01 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/09/26 10:07:23 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int	x;

	if (c >= '0' && c <= '9')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
