#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - create a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
		len = write(fd, text_content, strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
