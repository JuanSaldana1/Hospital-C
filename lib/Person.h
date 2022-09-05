/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:23:14 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/05 18:27:16 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_H
# define PERSON_H

typedef struct s_Person
{
	int				key;
	char			*name;
	char			*surname;
	char			*dni;
	char			*occupation;
	char			*address;
	char			*phone;
	char			*email;
	struct s_Person	*next;
}			t_Person;

#endif