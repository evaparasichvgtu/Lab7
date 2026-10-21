#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");
    task_1();
    task_2();
    homework();
	return 0;
}

int task_1() {
    char c;
    printf("введите символ:\n");
    scanf("%c", &c);

    switch (c) 
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("это цифра\n");
        break;
    default:
        printf("это буква\n");
        break;
    }

    return 0;
}

int task_2() {
    float x, y;
    char c;
    printf("введите арифметическое выражение (например: 2 * 3)\n");
    scanf("%f %c %f", &x, &c, &y);
    switch (c) {
    case '+':
        printf("= %g", x + y);
        break;
    case '-':
        printf("= %g", x - y);
        break;
    case '*':
        printf("= %g", x * y);
        break;
    case '/':
        if (y != 0) printf("= %g", x / y); 
        else printf("на ноль делить нельзя!\n");
        break;
    case '^':
        printf("= %g", pow(x,y));
        break;
    default:
        printf("неизвестная операция\n");
        break;
    }
    return 0;
}

int homework() {
    int st;
    printf("введите степень двойки (например: 10, 20, 30...)\n");
    scanf("%d", &st);
    switch (st) {
    case 10:
        printf("2^%d - это К\n", st);
        break;
    case 20:
        printf("2^%d - это M\n", st);
        break;
    case 30:
        printf("2^%d - это G\n", st);
        break;
    case 40:
        printf("2^%d - это Т\n", st);
        break;
    case 50:
        printf("2^%d - это P\n", st);
        break;
    case 60:
        printf("2^%d - это E\n", st);
        break;
    default:
        printf("для степени %d нет соответствующей приставки в данном задании\n", st);
        break;
    }
    return 0;
}