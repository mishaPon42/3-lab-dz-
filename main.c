#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

/*
КОНТРОЛЬНЫЕ ПРИМЕРЫ ДЛЯ ПРОВЕРКИ АЛГОРИТМА:
Тест 1 (Из примера): Скорость = 20 Мбит/с, Время = 60 с -> Ответ: 1200 Мбит (150 Мбайт)
Тест 2: Скорость = 100 Мбит/с, Время = 8 с -> Ответ: 800 Мбит (100 Мбайт)
Тест 3: Скорость = 1 Мбит/с, Время = 16 с -> Ответ: 16 Мбит (2 Мбайт)
*/

int main() {
    float skorost;
    float vremya;

    setlocale(LC_CTYPE, "");

    printf("РАСЧЕТ ОБЪЕМА ПЕРЕДАННЫХ ДАННЫХ\n");
    printf("================================\n\n");

    printf("Введите скорость передачи данных (Мбит/с): ");
    scanf("%f", &skorost);

    printf("Введите продолжительность соединения (секунд): ");

    scanf("%f", &vremya);

    printf("\n");
    float obyem_mbit = skorost * vremya;
    float obyem_mbayt = obyem_mbit / 8.0;

    printf("УСЛОВИЯ:\n");
    printf("- Заданная скорость: %.2f Мбит/с.\n", skorost);
    printf("- Время соединения: %.2f секунд.\n\n", vremya);

    printf("РАСЧЕТ:\n");
    printf("- Объем в мегабитах: %.2f Мбит/с * %.2f с = %.2f Мбит.\n", skorost, vremya, obyem_mbit);
    printf("- Перевод в мегабайты: %.2f Мбит / 8 = %.2f Мбайт.\n", obyem_mbit, obyem_mbayt);
    printf("================================\n");

    printf("РЕЗУЛЬТАТ: Объем переданных данных составляет %.2f Мбайт.\n", obyem_mbayt);

    return 0;
}
