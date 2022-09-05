/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:19:58 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/05 18:32:49 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/libc.h"

int	main(int argc, char const *argv[])
{
	int			selected_option;
	t_Hospital	hospital;

	(void)argv;
	write(1, "\033[0;31mBienvenido al programa de gestión del hospital.\n\n\033[0m", 62);
	while (42)
	{
		if (argc == 1)
			selected_option = options();
		else
			exit(1);
		if (selected_option == 0)
			exit (0);
		else if (selected_option == 1)
			hospital.person = create_person();
		printf("key: %d\nNombre: %s\n", hospital.person->key, hospital.person->name);
	}
}
