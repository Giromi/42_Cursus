#include <string.h>
#include "libft/libft.h"
#include <stdio.h>

int main(void)
{
    int src[] = { 7, 6, 5, 4, 3, 2, 1};
    int dest[7];
	char src1[] = "BlockDMask";
	char str[] = "BlockDMask";
	char str1[] = "BlockDMask";
    char dest1[] = "fffffdddddzzzzz";
    char dest2[] = "fffffdddddzzzzz";
    char dest3[] = "fffffdddddzzzzz";
	char mysrc1[] = "BlockDMask";
    char mydest1[] = "fffffdddddzzzzz";
    char mydest2[] = "fffffdddddzzzzz";
    char mydest3[] = "fffffdddddzzzzz";
 
    for (int i = 0; i < 7; ++i)
        printf("[%d]", src[i]);
    printf("\n");
    for (int i = 0; i < 7; ++i)
        printf("[%d]", dest[i]);
    printf("\n");
    memmove(dest, src, sizeof(int) * 2);

    for (int i = 0; i < 7; ++i)
        printf("[%d]", src[i]);
    printf("\n");
    for (int i = 0; i < 7; ++i)
        printf("[%d]", dest[i]);
    printf("\n");

    printf("----------------------------------------\n");
    // 메모리 복사1 : src 길이만큼만 복사
    memmove(dest1, src1, sizeof(char) * 10);
    ft_memcpy(mydest1, src1, sizeof(char) * 10);
 
    // 메모리 복사2 : src 길이 + 1 만큼 복사
    memmove(dest2, src1, sizeof(char) * 10 + 1);
    ft_memcpy(mydest2, src1, sizeof(char) * 10 + 1);
 
    // 메모리 복사3 : 메모리 일부 복사
    memmove(dest3 + 10, src1, sizeof(char) * 3);
    ft_memcpy(mydest3 + 10, src1, sizeof(char) * 3);

    // 메모리 복사4 : 메모리 겹침
    memmove(str, str + 2, sizeof(char) * 4);
    ft_memcpy(str1, str1 + 2, sizeof(char) * 4);

 
 
    // source


    // source
    printf("src1  : %s\n", src1);
    // destination
    printf("dest1 : %s\n", dest1);
    printf("mydest1 : %s\n", mydest1);
    printf("dest2 : %s\n", dest2);
    printf("mydest2 : %s\n", mydest2);
    printf("dest3 : %s\n", dest3);
    printf("mydest3 : %s\n", mydest3);
	printf("\n");
	printf("ori    : %s\n", src1);
    printf("src    : %s\n", str);
    printf("mysrc  : %s\n", str1);
    printf("long max  : %ld\n", __LONG_MAX__);
 
    return 0;
}
