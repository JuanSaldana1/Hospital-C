/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:50:21 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/05 18:36:15 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libc.h"

t_Person	*create_person(void)
{
	static int	key;
	t_Person	*node;

	node = malloc(sizeof(t_Person));
	node->key = key;
	key++;
	printf("Nombre: ");
	node->name = malloc(10000);
	scanf("%s", node->name);
	return (node);
}

int	check_dni(char *dni)
{
	int	counter;

	counter = 0;
	while (dni[counter])
	{
		if (dni[counter] < '0' || dni[counter] > '9')
		{
			return (1);
		}
		else
			return (0);
		counter++;
	}
	return (1);
}

int	options(void)
{
	int	option_selected;

	printf("\n\n");
	write(1, "Elije una opción:\n", 19);
	write(1, "1. Registra a una persona.\n", 27);
	write(1, "0. Salir.\n", 10);
	scanf("%d", &option_selected);
	return (option_selected);
}
