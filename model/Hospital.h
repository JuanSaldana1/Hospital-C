/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hospital.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:09:01 by jsaldana          #+#    #+#             */
/*   Updated: 2022/07/19 20:21:02 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSPITAL_H
# define HOSPITAL_H
# include "Person.h"

typedef struct Hospital
{
	t_Person	*person;
}				t_Hospital;

#endif