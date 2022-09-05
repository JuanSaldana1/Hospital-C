/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:21:01 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/05 17:57:48 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBC_H
# define LIBC_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "Person.h"
# include "Hospital.h"

int		check_dni(char *dni);
int 	options(void);
t_Person	*create_person(void);

#endif