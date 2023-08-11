#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text_content to end of file
 * @filename: Name of file
 * @text_content: NULL-terminated string to append to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written = 0, text_length = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[text_length])
{
text_length++;
}
}
else
{
return (1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
bytes_written = write(fd, text_content, text_length);
if (bytes_written == -1 || bytes_written != text_length)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
