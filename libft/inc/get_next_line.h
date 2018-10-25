/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/28 16:37:26 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/28 16:37:29 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 127

# include <fcntl.h>

# include "libft.h"

typedef struct	s_reader
{
	int		fd;
	char	*prev;
}				t_reader;

int				get_next_line(int const fd, char **line);

#endif
