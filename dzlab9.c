#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "RUS");

    char c;
    int a;
    int b = 2;
    int i, j, k, go;

    do {
        printf("Введите символ из которого будет состоять фигура: ");
        scanf(" %c", &c);

        printf("Введите длинну стороны равнобедренного треугольника: ");
        scanf("%d", &a);

        if (a < 2)
        {
            printf("Ошибка: длина должна быть не меньше 2.\n");
        }
        else
        {
            printf("Равнобедренный треугольник:\n");

            for (i = 0; i < a; i++)
            {
                for (k = 0; k < b * (a - i - 1) / 2; k++)
                {
                    printf(" ");
                }

                for (j = 0; j <= b * i; j++)
                {
                    if (j == 0 || j == b * i || i == a - 1)
                    {
                        printf("%c", c);
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                printf("\n");
            }
        }

        printf("Запустить программу заново? (любая цифра - да; 0 - нет): ");
        scanf("%d", &go);

    } while (go != 0);
}