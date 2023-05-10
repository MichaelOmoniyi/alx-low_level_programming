#include "main.h"

/**
 * create_file - Creates file.
 * @filename: File name
 * @text_content: File content.
 * Return: 1, on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int file, text_len, file_write;

if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
text_content = "";
}

file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (file == -1)
{
return (-1);
}

for(text_len = 0; text_content[text_len]; text_len++)
{
;
}

file_write = write(file, text_content, text_len);

if (file_write == -1)
{
return (-1);
}

close (file);

return (1);
}
