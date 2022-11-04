/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiwanczu <iiwanczu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:11:20 by iiwanczu          #+#    #+#             */
/*   Updated: 2022/11/04 13:46:00 by iiwanczu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// --------------- Prototipo ----------------- 
// char *get_next_line(int fd);
// ----------- Archivos a entregar -----------
// get_next_line.c, get_next_line_utils.c,
// get_next_line.h
// get_next_line_bonus.c, get_next_line_utils_bonus.c,
// get_next_line_bonus.h

/****************************************************************************

>> char		*temp;
>> int		i;
>> int		j;
 1- "temp" will we used to temporarily store anything that's AFTER the line
that we already extracted in the previous functions. And we are going to
return it.
 2- "i" and "j" are again, going to be used to copy the contents of
"static_string" into "temp".

>> while (static_string[i] != '\0' && static_string[i] != '\n')
 1- Here once again, we are just getting the length of the line that we
extracted, which won't dissappear because until know, the line has always
been stored in the static variable.

>> if (static_string[i] == '\0')
 1- To understand this condition, we should understand that:
	· The "i" variable will only be incremented if the first position
	(Because "i" is initially zero) is different from '\n' and '\0'.
	· We WON'T enter the while() loop if the first position is equal to
	either '\0' or '\n'. 
	· So then, the condition will only execute if the first position is
	a null character. 
 2- If we do go into the condition, we simply just free the static variable
and return NULL.

>> temp = (char *)malloc((ft_strlen(static_string) - i + 1) * sizeof(char));
 1- Probably the cleverest malloc in this whole project, which can be
understood really easily if we know this things:
	· The static variable hold a portion of text, which could exactly fit the
	line's length, or could be bigger than that. If it's bigger, we will keep
	the remaining characters with THIS function.
	· "i" represents the length of the LINE, so then, our "i" could be X but
	we could still have characters after that new line.
	· That's why, our malloc is the length of the static variable minus the
	LENGTH of the LINE ("i"). And "+ 1" as always, just so we can write a null
	character at the end.

>> while (static_string[i] != '\0')
>> temp[j] = '\0';
 1- This is just a standard copying loop, this is where we use "j" and "i".
 2- Here we'll be copying any characters that may be AFTER the line we just
extracted, into the variable "temp".
 3- Then we just write the final null character.

>> free(static_string);
>> return (temp);
 1- We free the static variable, because we are going to reassign it with the
"temp" variable.
 2- Then we just return "temp", which would be any remaining characters after
the line we extracted.

****************************************************************************/
char	*ft_remaining_string(char *static_string)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (static_string[i] != '\0' && static_string[i] != '\n')
		i++;
	if (static_string[i] == '\0')
	{
		free(static_string);
		return (NULL);
	}
	temp = (char *)malloc((ft_strlen(static_string) - i + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	i++;
	while (static_string[i] != '\0')
		temp[j++] = static_string[i++];
	temp[j] = '\0';
	free(static_string);
	return (temp);
}

/****************************************************************************

>> char		*temp;
>> int		i;
>> int		j;
 1- "temp" will we used to temporarily store the line, and we are going to
return it.
 2- "i" and "j" are going to be used to copy the contents of "static_string"
into "temp".


>> 	if (static_string[i] == '\0')
 1- We use this in case the content of the static variable is empty. If the
string has a null character in the first index, then it has nothing else to
read.


>> while (static_string[i] != '\0' && static_string[i] != '\n')
 1- We use this while to get the length of the line we are going to exctract.


>> if (static_string[i] == '\n')
 1- In many other peoples' codes, everyone used "(i + 2)" for the malloc, but
with that method, whenever we end with a null character, we are going to
store an extra character space with nothing in it. So instead, I made this
"if" conditional, so that if we HAVE a new line character, we malloc 1 extra
character.


>> temp = (char *)malloc((i + 1) * sizeof(char));
 1- "(i + 1)" represents the len of the line + 1.
 2- The "+ 1" is just so that we can have space for the very last null
character


>> while (j < i)
 1- This is just a standard copying while loop, the only peculiar thing
that's different is that instead of using "(static_string[j] != '\0')" as a
condition, we just use "i" which is basically the length of the line.


>> temp[j] = '\0';
>> return (temp);
 1- Finally, all we have to do is to finish the line string and return it.

****************************************************************************/
char	*ft_look_for_line(char *static_string)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (static_string[i] == '\0')
		return (NULL);
	while (static_string[i] != '\0' && static_string[i] != '\n')
		i++;
	if (static_string[i] == '\n')
		i++;
	temp = (char *)malloc((i + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (j < i)
	{
		temp[j] = static_string[j];
		j++;
	}
	temp[j] = '\0';
	return (temp);
}

/****************************************************************************

>> ssize_t	r;
 1- "r" will be the return from the function read(), whenever we call it with
the fd the function recieves.


>> char		*temp;
 1- This will be the array of all the characters each time we read the file. 
BUT, we'll read <BUFFER_SIZE> amount of characters, no more, no less.
 2- Since this is a temp string for the <BUFFER_SIZE> amount of characters, we
can already do malloc to ith with the amount we know we need. Plus one because
of the null character ('\0').


>> r = 1;
 1- Here we would use a do-while but since it's prohibited by norm, we have to
do a weird method where inside the while, one condition is "r != 0", which
basically means, read() was able to read something (If positive).


>> while (!ft_look_for_char(static_string, '\n') && r != 0)
 1- The "r" condition is really easy, "r" is the return value of the function
read() everytime we call it, and it it's positive we'll keep going. But if
it's negative we have a sepparate condition inside the while loop.

 2- The "!ft_look_for_char(static_string, '\n')" conditon may look a little bit
strange, but basically what we're trying to ask with "ft_look_for_char()" 
(without negation) is: Is there a new line character in the "temp" char array?
If there is, then we can finally get a LINE, and we can leave the loop. If
not, then we shall keep going.

· So then, this while loop will only stop if: read() function does NOT return
a positive value, OR if the ft_look_for_char() returns something different from 
NULL, which basically means "We didn't find a new line character in this string".


>> if (r == -1)
 1- If the read fails inside the loop, we just free "temp", because it's dynamic
memory and we don't wanna waste space. And we also free "static_string", in
case there's something saved in there, because again, this is all dynamic
memory, in which we don't wanna waste space on. 


>> temp[r] = '\0';
 1- Here we are just manually writing assigning the null character to the string.
This is why I had to do the "(BUFFER_SIZE + 1)" when we did the malloc to "temp".


>> free(temp);
>> return (static_string);
 1- Then we can just free "temp" because we don't use it anymore, and return the
new assigned "static_string".

****************************************************************************/
char	*ft_read_file(int fd, char *static_string)
{
	ssize_t	r;
	char	*temp;

	temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	r = 1;
	while (!ft_look_for_char(static_string, '\n') && r != 0)
	{
		r = read(fd, temp, BUFFER_SIZE);
		if (r == -1)
		{
			free(temp);
			free(static_string);
			return (NULL);
		}
		temp[r] = '\0';
		static_string = ft_strjoin(static_string, temp);
	}
	free(temp);
	return (static_string);
}

/****************************************************************************

>> static_string = ft_read_file(fd);
 1- We gotta read the FILE DESCRIPTOR that we recieved UNTIL we find a new 
line character ('\n'), and then we save it into the static variable 
"static_string".


>> returned_line = ft_look_for_line(static_string);
 1- Here we'll actually be trying to get_the_next_LINE. "returned_line" is 
going to be the next line from where the "static_string" static variable is 
positioned. Because, the BUFFER_SIZE won't always be the exact same size as 
the file we are reading, or the line we are keeping. For example, if our file
reads:
"
Hello World
Abc
Goodbye World
"
And our BUFFER_SIZE is 20, if we were to print that we would get something 
like this the first time we execute the program:
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
 1- Here we are going to be re-assigning the "static_string" to anything 
that's left in the "static_variable" AFTER the new line character ('\n').
In the previous example, the remaining characters after the new line
character, and after the BUFFER_SIZE end are:
"
Abc
Good
"
 2- And now, we will make sure to keep this in the "static_string" variable,
so that when we call the  ft_read_file() function, we can continue to read
from the remaining characters.


>> return (returned_line);
 1- And finally, we just return the extracted line.

****************************************************************************/
char	*get_next_line(int fd)
{
	static char	*static_string;
	char		*returned_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_string = ft_read_file(fd, static_string);
	if (!static_string)
		return (NULL);
	returned_line = ft_look_for_line(static_string);
	static_string = ft_remaining_string(static_string);
	return (returned_line);
}

int	main(void)
{
	char	*result;
	int		fd;

	fd = open("test.txt", O_RDONLY);
	result = get_next_line(fd);
	printf("%s", result);
	close(fd);
	system("leaks a.out");
	return (0);
}

// :: Por qué castear el malloc.
// :: Entender el sizeof() y cuánto ocupa cada tipo de variable.
// :: Justificar el uso de ssize_t sobre un int, explicar las diferencias.
// :: Entender la explicación del bonus.