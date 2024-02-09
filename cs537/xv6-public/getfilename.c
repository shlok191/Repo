#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{

	if (argc != 2)
	{

		printf(2, "Usage: %s <name_of_file>\n", argv[0]);
		exit();
	}

	char *filename = argv[1];
	char buffer[256];

	int fd = open(filename, 0);
	printf(2, "FD received: %d", fd);

	getfilename(fd, buffer, 256);

	printf(2, "XV6_TEST_OUTPUT Open filename: %s\n", buffer);

	exit();
}
