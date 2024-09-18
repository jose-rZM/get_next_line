/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramire2 <jramire2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:32:52 by jramire2          #+#    #+#             */
/*   Updated: 2024/09/18 12:52:09 by jramire2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    size_t  bytes;
    char    buf[BUFFER_SIZE];
    
    if (fd < 0 || BUFFER_SIZE <= 0)
    {
        return (0);
    }
    return ("");
}
