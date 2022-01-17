#include <string.h>
#include "libft.h"
#include <stdio.h>

int main(void)
{
        const char src1[] = "Hello_World";
        char re_dst1[12];
        char my_dst1[12];


        char src2[5] = "12345";
        char re_dst2[12];
        char my_dst2[12];
        size_t si = 12;

        printf("------strlcpy-----\n");
        printf("< before >\n");
        for (int i = 0; i < si; i++)
                printf("[%c]", *(re_dst1 + i));
        printf("\n");
        for (int i = 0; i < si; i++)
                printf("[%c]", *(my_dst1 + i));
        printf("\n");
        printf("real : %zu\n", strlcpy(re_dst1, src1, sizeof(char) * 7));
        printf(" my  : %zu\n", ft_strlcpy(my_dst1, src1, sizeof(char) * 7));

        printf("< after >\n");
        for (int i = 0; i < si; i++)
                printf("[%c]", *(re_dst1 + i));
        printf("\n");
        for (int i = 0; i < si; i++)
                printf("[%d]", *(re_dst1 + i));
        printf("\n");
        printf("\n");
        for (int i = 0; i < si; i++)
                printf("[%c]", *(my_dst1 + i));
        printf("\n");
        for (int i = 0; i < si; i++)
                printf("[%d]", *(my_dst1 + i));
        printf("\n");
        printf("\n");

        printf("< before >\n");
        for (int i = 0; i < si; i++)
                printf("[%c]", *(re_dst2 + i));
        printf("\n");
        for (int i = 0; i < si; i++)
                printf("[%c]", *(my_dst2 + i));
        printf("\n");
        printf("real : %zu\n", strlcpy(re_dst2, src2, sizeof(char) * 0));
        printf(" my  : %zu\n", ft_strlcpy(my_dst2, src2, sizeof(char) * 0));
        printf("< after >\n");
        for (int i = 0; i < si; i++)
                printf("[%c]", *(re_dst2 + i));
        printf("\n");
        for (int i = 0; i < si; i++)
                printf("[%d]", *(re_dst2 + i));
        printf("\n");
        printf("\n");
        for (int i = 0; i < si; i++)
                printf("[%c]", *(my_dst2 + i));
        printf("\n");
        for (int i = 0; i < si; i++)
                printf("[%d]", *(my_dst2 + i));
        printf("\n");
        printf("\n");
        printf("\n");
        printf("------------strlen------------\n");
        printf("len : %zu\n", strlen(src2));
        printf("len : %zu\n", ft_strlen(src2));
        return (0);
}
