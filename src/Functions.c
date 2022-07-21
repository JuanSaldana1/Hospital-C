/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:50:21 by jsaldana          #+#    #+#             */
/*   Updated: 2022/07/21 12:08:30 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	options(void)
{
	char	option_selected;

	write(1, "Bienvenido al programa de gestión del hospital.\n\n", 49);
	write(1, "Elije una opción: ", 49);
	write(1, "1. Registra a una persona.\n", 27);
	write(1, "0. Salir.\n", 10);
	read(1, &option_selected, sizeof(char *));
	if (option_selected == '0')
		break ;
}
