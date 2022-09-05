/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hospital.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:09:01 by jsaldana          #+#    #+#             */
/*   Updated: 2022/09/05 18:09:45 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSPITAL_H
# define HOSPITAL_H
# include "Person.h"

typedef struct Hospital
{
	struct s_Person	*person;
}				t_Hospital;

#endif