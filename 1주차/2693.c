// ConsoleApplication3.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(void) {
    int** arr;
    int num, i;
    int count = 0;
    scanf("%d", &num);

    arr = (int**)malloc(sizeof(int*) * num);
    for (i = 0; i < num; i++) {
        arr[i] = (int*)malloc(sizeof(int) * 10);
    }
    for (int j = 0; j < num; j++) {
        for (int k = 0; k < 10; k++) {
            scanf("%d", &arr[j][k]);
        }
    }
    for (i = 0; i < num; i++) {
        qsort(arr[i], 10, sizeof(int), compare);
    }
    for (i = 0; i < num; i++) {
        printf("%d\n", arr[i][7]);
    }
    for(i=0; i<num; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}