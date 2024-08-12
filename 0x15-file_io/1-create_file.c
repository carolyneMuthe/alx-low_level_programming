#include "main.h"

/**
 * create_file - Creates a file and writes text_content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 *
 * Description: This function creates a file with read and
 * write permissions for the owner only (rw-------).
 * If the file already exists, it truncates the file
 * and writes the new content. If filename is NULL, the function returns -1.
 * If text_content is NULL, an empty file is created.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1 || (size_t)bytes_written != length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
