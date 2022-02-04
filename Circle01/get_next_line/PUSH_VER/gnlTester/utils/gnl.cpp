extern "C"
{
#define new tripouille
#include "get_next_line.h"
#undef new
}

#include "gnl.hpp"
#include "color.hpp"
#include "check.hpp"

#include <string.h>

extern int iTest;

using namespace std;

void gnl(int fd, char const * expectedReturn)
{
	char	*gnlReturn = get_next_line(fd);
	if (expectedReturn == NULL)
	{
		printf("\n");
		check(gnlReturn == NULL);
		printf("\nmy : %s\nre : %s\n", gnlReturn, expectedReturn);
	}
	else
	{
		printf("\n");
		check(!strcmp(gnlReturn, expectedReturn));
		printf("\nmy : %s\nre : %s\n", gnlReturn, expectedReturn);
	// printf("\n");
	}
	free(gnlReturn);
	iTest++;
}
