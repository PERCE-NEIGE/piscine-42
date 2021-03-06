/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 21:24:38 by djean-ch          #+#    #+#             */
/*   Updated: 2018/07/22 15:00:52 by djean-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nbr;
	int i;
	int neg;

	neg = 0;
	nbr = 0;
	i = 0;
	while (str[i] <= 32 || str[i] == 127)
		i++;
	if (str[i] == '-')
		neg = 1;
	else if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0' && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-nbr);
	else
		return (nbr);
}
