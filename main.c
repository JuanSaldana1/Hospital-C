/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:19:58 by jsaldana          #+#    #+#             */
/*   Updated: 2022/07/21 10:57:49 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/libc.h"

int	main(int argc, char const *argv[])
{
	t_Person	person1;
	t_Hospital	hospital;

	(void)**argv;
	if (argc == 1)
	{
		options();
	}
	person1.name = "Julio";
	person1.surname = "Sanz";
	person1.dni = "12345678M";
	person1.email = "jsanz@hospiutal.com";
	hospital.person = malloc(sizeof(t_Person *));
	person1.dni = malloc(9);
	hospital.person[0] = person1;
	printf("%i", check_dni(person1.dni));
	free(hospital.person);
	free(person1.dni);
	exit(0);
	return (0);
}
