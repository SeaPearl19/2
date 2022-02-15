#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
int main(void){
    
    int a;
    printf(" Задание 1");
    printf("\n");
    printf("Введите целое число");
    printf("\n");
    scanf("%d", &a);
    printf("Вы ввели %d", a);
    printf("\n");
    printf("\n");
    getchar();
    
    
    
    printf(" Задание 2");
    printf("\n");
    printf("Мат. операции с Вашим числом:");
    printf("\n");
    a+=1;
    printf("Плюс 1: %d", a);
    printf("\n");
    a-=1;
    printf("Минус 1: %d", a);
    printf("\n");
    a=a*10;
    printf("Умножить на 10: %d", a);
    printf("\n");
    a=a/10;
    printf("Делить на 10 (с округлением до целого): %d", a);
    printf("\n");
    
    
    
    printf(" Задание 3");
    printf("\n");
    printf("Массив размерностью 7, заполненный случайными числами:");
    printf("\n");
    printf("(УБЕДИТЕЛЬНАЯ ПРОСЬБА: сли хотите массив другой размерности - поменяйте ""5"" в ""#define N 6"" в коде программы)");
    printf("\n");
    
    #define N 6
    int arr[N] = {0};
    int i = 0, b = 0, c = 0;
    printf("Введите диапазон случайных чисел для заполнения массива");
    scanf("%d%d", &b, &c);
    
    srand(time(0));
    for (i = 0; i < N; i++){
        arr[i] = b+rand()%(c-b+1);
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
    
    return 0;
}