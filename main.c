
#include "get_next_line.h"

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"


// takes in a single file descriptor
int		main(int argc, char **argv)
{
	int fd;
	char *line;
	int index;
	int ret;

	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			printf("\nFile 1\n");
			index = 0;
			fd = open(argv[1], O_RDONLY);
			ret = 1;
			while (ret == 1)
			{
				ret = get_next_line(fd, &line);
				printf(" %s\n", line);
			}
			close(fd);
		}
	}
	return (1);
}

/*
// tests specific file 
int main ()
{
	int fd;
	char *line;

	fd = open("file.txt", O_RDONLY);
	while (get_next_line(fd,&line) > 0)
		printf("Line: %s\n", );
	close(fd);
}=====
*/

/*
// standard input/output/error
int main()
{
	int fd;
	char *line;

	fd = 1; //Standard input
	//fd = 0;	//standard output
	while (get_next_line(fd, &line) > 0)
		printf("%s\n", line);
}
*/

/*
//test for file error
int main()
{
	int fd;
	char *line;


	fd = 42;
	if (get_next_line(fd,&line) == -1)
		printf("-1\n");
}
*/

/*
// main for testing multiple file descriptors
int		main(int argc, char **argv)
{=====
	int fd;
	int fd2;
	int	index;
	int ret;
	char *line;

	if (argc >= 2)
	{
		if ((access(argv[1], F_OK) == 0) && (access(argv[2], F_OK) == 0))
		{
			printf("\nFile 1\n");
			index = 0;
			fd = open(argv[1], O_RDONLY);
			ret = 1;
			while (ret == 1)
			{
				ret = get_next_line(fd, &line);
				printf("Result: %i  Line: %s\n", ret, line);
			}
			close(fd);
			printf("\nFile 2\n");
			index = 0;
			fd2 = open(argv[2], O_RDONLY);
			ret = 1;
			while (ret == 1)
			{
				ret = get_next_line(fd2, &line);
				printf("Result: %i  Line: %s\n", ret, line);
			}
			close(fd2);
		}
	}
}
*/

