/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:23:14 by jsaldana          #+#    #+#             */
/*   Updated: 2022/07/21 10:55:13 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_H
# define PERSON_H

typedef struct s_Person
{
	char	*name;
	char	*surname;
	char	*dni;
	char	*occupation;
	char	*address;
	char	*phone;
	char	*email;
}			t_Person;

int	check_dni(char *dni)
{
	int	counter;

	counter = 0;
	while (dni[counter])
	{
		if (dni[counter] < '0' || dni[counter] > '9')
		{
			return (1);
			break ;
		}
		else
			return (0);
		counter++;
	}
	return (1);
}

/* unsigned t_Person *to_string(void)
{
	printf("%s");
	return ()
} */
#endif