#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t n, n2;
    char *buffer;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    n = read(fd, buffer, letters);
    if (n == -1)
        return (0);

    n2 = write(STDOUT_FILENO, buffer, n);
    if (n2 == -1)
        return (0);

    free(buffer);
    close(fd);
    return (n2);
}
