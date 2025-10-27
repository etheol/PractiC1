#include <time.h>

int main() {
    const int n = 10; // Размер массива (можно изменить)
    int arr[n];

    // Инициализация генератора случайных чисел
    srand(time(NULL));

    // Заполнение массива случайными числами от 1 до 100
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    // Вывод массива (опционально)
    printf("Массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Подсчёт сумм и количества элементов
    double sum_even = 0.0, sum_odd = 0.0;
    int count_even = 0, count_odd = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum_even += arr[i];
            count_even++;
        } else {
            sum_odd += arr[i];
            count_odd++;
        }
    }
    
    // Вычисление средних
    double avg_even = (count_even > 0) ? sum_even / count_even : 0.0;
    double avg_odd = (count_odd > 0) ? sum_odd / count_odd : 0.0;

    // Вывод результатов
    printf("Среднее по чётным индексам: %.2f\n", avg_even);
    printf("Среднее по нечётным индексам: %.2f\n", avg_odd);

    return 0;
}
