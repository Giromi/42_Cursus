#include "libft.h"
#include <stdio.h>

static long	ft_strtol(const char *nptr)
{
	long	sign;
	long	result;
	long	tmp;

	sign = 1;
	result = 0;
	tmp = 0;
	while ((*nptr >= 9 && 13 >= *nptr) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && '9' >= *nptr)
	{
		tmp = (result * 10) + sign * (*nptr - '0');
		if (tmp > 0 && result < 0)
		{
			printf("over\n");
			return (LONG_MIN);
		}
		else if (tmp < 0 && result > 0)
		{
			printf("over\n");
			return (LONG_MAX);
		}
		result = tmp;
		nptr++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	return ((int)ft_strtol(str));
}
