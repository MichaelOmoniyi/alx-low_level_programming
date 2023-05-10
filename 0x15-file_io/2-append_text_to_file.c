#include "main.h"

/**
 * append_text_to_file - Appends text at the end of file.
 * @filename: File name.
 * @text_content: Text to be appended to the end of file.
 * Return: 1 on success an -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, text_count, file_write;

if (!filename)
{
return (-1);
}

file = open(filename, O_WRONLY | O_APPEND);

if (file == -1)
{
return (-1);
}

if (text_content)
{
for (text_count = 0; text_content[text_count]; text_count++)
{
;
}

file_write = write(file, text_content, text_count);

if (file_write == -1)
{
return (-1);
}
}

close(file);

return (-1);
}
