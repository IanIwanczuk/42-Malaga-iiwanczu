/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:11:20 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/10/31 19:20:24 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// --------------- Prototipo ----------------- 
// char *get_next_line(int fd);
// ----------- Archivos a entregar -----------
// get_next_line.c, get_next_line_utils.c,
// get_next_line.h

char	*ft_remaining_string(char *static_string)
{

	return (0);
}

char	*ft_look_for_line(char *static_string)
{

	return (0);
}

/****************************************************************************

· Here we would need a do-while but since it's prohibited by norm, we have to
do a weird method where inside the while one condition is "r != 0", which
basically means, read() was able to read something (If positive).

>> ssize_t	r;
1- "r" will be the return from the function read(), whenever we call it with
the fd the function recieves.

>> char	*temp;
1- This will be the array of all the characters each time we read the file. 
BUT, we'll read <BUFFER_SIZE> amount of characters, no more, no less.


****************************************************************************/
int	ft_read_file(int fd)
{
	ssize_t	r;
	char	*temp;

	r = 1;

	return (0);
}

/****************************************************************************

>> static_string = ft_read_file(fd);
1- We gotta read the FILE DESCRIPTOR that we recieved UNTIL we find a new line
character ('\n'), and then we save it into the static variable "static_string".


>> returned_line = ft_look_for_line(static_string);
2- Here we'll actually be trying to get_the_next_LINE. "returned_line" is going
to be the next line from where the "static_string" static variable is positioned.
Because, the BUFFER_SIZE won't always be the exact same size as the file we are
reading, or the line we are keeping. For example, if our file reads:

"
Hello World
Abc
Goodbye World
"

And our BUFFER_SIZE is 20, if we were to print that we would get something like
this the first time we execute the program:

"
Hello World
Abc
Good
"

But the first line's length is only 12 characters counting the new line
character ('\n').
So our line is 12 characters long, and the "static_string" variable has 20
characters because of the BUFFER_SIZE. This is where the  ft_look_for_line()
function will do its job.


>> static_string = ft_remaining_string(static_string);
3- Here we are going to be re-assigning the "static_string" to anything that's
left in the "static_variable" AFTER the new line character ('\n').
In the previous example, the remaining characters after the new line character,
and after the BUFFER_SIZE end are:
"
Abc
Good
"
And now, we will make sure to keep this in the "static_string" variable, so that
when we call the  ft_read_file() function, we can continue to read from the
remaining characters.


>> return (returned_line);
4- And finally, we just return the extracted line.

*****************************************************************************/
char	*get_next_line(int fd)
{
	static char	*static_string;
	char		*returned_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_string = ft_read_file(fd);
	returned_line = ft_look_for_line(static_string);
	static_string = ft_remaining_string(static_string);
	return (returned_line);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*result;
// 	int		i;

// 	fd = open("test.txt", O_RDONLY);
// 	result = get_next_line(fd);
// 	while (result != NULL)
// 	{
// 		i++;
// 		printf("%d::%s", i, result);
// 		result = get_next_line(fd);
// 		free(result);
// 	}
// 	close(fd);
// 	system("leaks -q a.out");
// 	return (0);
// }
