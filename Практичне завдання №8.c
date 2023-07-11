#include <stdio.h>
#include <string.h>

// Функція для обчислення факторіала
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Функція для обчислення кількості анаграм
int countAnagrams(char word[]) {
    int length = strlen(word);
    int frequency[26] = {0}; // Масив для підрахунку частоти кожної літери
    int numerator = factorial(length); // Чисельник у формулі
    int denominator = 1; // Знаменник у формулі

    // Підрахунок частоти кожної літери в слові
    for (int i = 0; i < length; i++) {
        int index = word[i] - 'A'; // Перетворення літери на індекс
        frequency[index]++;
    }

    // Обчислення знаменника у формулі
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 1) {
            denominator *= factorial(frequency[i]);
        }
    }

    // Кількість анаграм = чисельник / знаменник
    int count = numerator / denominator;

    return count;
}

int main() {
    char word[15];
    printf("Enter a word (up to 14 letters): ");
    scanf("%s", word);

    int result = countAnagrams(word);
    printf("The number of possible anagrams is %d.", result);

    return 0;
}
