# Домашнее задание к работе 7
# Вариант 18
# Условие задачи
Напишите программу, которая интерпретирует степени 2 в соответствующие приставки (10 – K, 20 – M, G, T, P, E).
# Блок схема
<img width="522" height="1062" alt="image" src="https://github.com/user-attachments/assets/eecc1659-f559-4143-900d-dbd66cfc24ab" />
# Код
``` c
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
```
