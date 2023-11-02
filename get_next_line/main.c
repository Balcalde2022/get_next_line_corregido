/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:17:00 by balcalde          #+#    #+#             */
/*   Updated: 2023/10/17 08:10:57 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

#include <stdio.h>
#include <fcntl.h>

int main(void)
 {
    int fd = open("tests/tango_history.txt", O_RDONLY);
    if (fd == -1) 
    {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    char *line;
    
   while ((line = get_next_line(fd)) != NULL) 
        {
        printf("%s", line);
        free(line); 
        }
        printf("\n");
    close(fd);
    printf("\n"); 
    return 0;
   
}