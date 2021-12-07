#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	const char src1[] = "Hello_World";
	char re_dst1[12];
	char my_dst1[12];


	const int src2[] = {3, 5, 6, 31}; 
	int re_dst2[12];
	int my_dst2[12];
	size_t si = 12;

	printf("------memcpy-----\n");
	printf("< before >\n");
	for (int i = 0; i < si; i++) 
		printf("[%c]", *(re_dst1 + i));
	printf("\n");
	for (int i = 0; i < si; i++) 
		printf("[%c]", *(my_dst1 + i));
	printf("\n");
	memcpy(re_dst1, src1, sizeof(char) * 7);
	ft_memcpy(my_dst1, src1, sizeof(char) * 7);
	printf("< after >\n");
	for (int i = 0; i < si; i++) 
		printf("[%c]", *(re_dst1 + i));
	printf("\n");
	for (int i = 0; i < si; i++) 
		printf("[%c]", *(my_dst1 + i));
	printf("\n");
	printf("\n");

	printf("< before >\n");
	for (int i = 0; i < si; i++) 
		printf("[%d]", *(re_dst2 + i));
	printf("\n");
	for (int i = 0; i < si; i++) 
		printf("[%d]", *(my_dst2 + i));
	printf("\n");
	memcpy(re_dst2, src2, sizeof(int) * 2);
	ft_memcpy(my_dst2, src2, sizeof(int) * 2);
	printf("< after >\n");
	for (int i = 0; i < si; i++) 
		printf("[%d]", *(re_dst2 + i));
	printf("\n");
	for (int i = 0; i < si; i++) 
		printf("[%d]", *(my_dst2 + i));
	printf("\n");
	printf("\n");
	return (0);
}


