#include "main.h"
/**
* create_file - creates a file
* @filename: name of a text file
* @text_content: content of file
* Return: 1
* On error, 0 is returned.
*/

int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;
	write(file, text_content, i);
	close(file);
	return (1);
}
