#include "main.h"

/**
 * create_file - program creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_open;
	int no_letters;
	int write_file;

	if (!filename)
		return (-1);

	file_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_open == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (no_letters = 0; text_content[no_letters]; no_letters++)
	{
		;
	}

	write_file = write(file_open, text_content, no_letters);

	if (write_file == -1)
		return (-1);

	close(file_open);

	return (1);
}

