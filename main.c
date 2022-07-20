/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:19:58 by jsaldana          #+#    #+#             */
/*   Updated: 2022/07/20 14:19:46 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/libc.h"

int	main(int argc, char const *argv[])
{
	t_Person	person1;
	t_Hospital	hospital;

	person1.name = "Julio";
	person1.surname = "Sanz";
	person1.email = "jsanz@hospiutal.com";
	hospital.person = malloc(sizeof(t_Person *));
	hospital.person[0] = person1;
	check_dni(person1.dni);
	free(hospital.person);
	return (0);
}
