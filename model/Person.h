/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:23:14 by jsaldana          #+#    #+#             */
/*   Updated: 2022/07/20 14:19:01 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_H
# define PERSON_H

typedef struct s_Person
{
	char	*name;
	char	*surname;
	char	dni[9];
	char	*occupation;
	char	*address;
	char	*phone;
	char	*email;

}			t_Person;

int	check_dni(char *dni)
{
	int	counter;

	counter = 0;
	while (counter <= 8)
	{
		if (dni[counter] < '0' || dni[counter] > '9')
		{
			return (1);
			break ;
		}
	}
}

/* unsigned char *to_string(void)
{
	write(1, )
} */
#endif