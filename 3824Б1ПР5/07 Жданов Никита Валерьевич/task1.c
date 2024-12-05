// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h> // Для INT_MAX и INT_MIN

int sum_of_two_numbers(int a, int b)
{
  // Проверка на переполнение
  if (a > 0 && b > 0 && a > INT_MAX - b) {
    return INT_MAX; // Возвращаем INT_MAX при переполнении
  }
  // Проверка на недополнение
  if (a < 0 && b < 0 && a < INT_MIN - b) {
    return INT_MIN; // Возвращаем INT_MIN при недополнении
  }
  
  return a + b; // Возвращаем сумму, если переполнения нет
}
