#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates file with given filename and writes to it
 * @filename: Name of file to create
 * @text_content: NULL-terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
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
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
bytes_written = write(fd, text_content, text_length);
if (bytes_written == -1 || bytes_written != text_length)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
