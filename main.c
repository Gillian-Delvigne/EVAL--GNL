#include "get_next_line.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
int		fd;
char	*line;
fd = open("foo.txt", O_RDONLY);
if (fd == -1)
{
	printf("Error Number % d\\n", errno);
	perror("Program");
}
while (1)
{
	line = get_next_line(fd);
	if (line == NULL)
	{
		printf("%s", line);
		break ;
	}
	printf("%s", line);
	free(line);
}
return (0);
}
