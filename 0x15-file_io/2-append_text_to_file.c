#include "main.h"

/**
 * append_text_to_file - program appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_open;
	int content_len;
	int write_file;

	if (!filename)
		return (-1);

	file_open = open(filename, O_WRONLY | O_APPEND);

	if (file_open == -1)
		return (-1);

	if (text_content)
	{
		for (content_len = 0; text_content[content_len]; content_len++)
			;

		write_file = write(file_open, text_content, content_len);

		if (write_file == -1)
			return (-1);
	}

	close(file_open);

	return (1);
}
