#include <iostream>
#include <climits>

// Рекурсивна функція для знаходження min парного елемента
int findSmallestEvenElementRecursive(const int arr[], int n, int index, int smallest) {
    if (index == n) {
        return smallest;
    }
    if (arr[index] % 2 == 0 && arr[index] < smallest) {
        smallest = arr[index];
    }
    return findSmallestEvenElementRecursive(arr, n, index + 1, smallest);
}

int main() {
    const int n = 10;
    int arr[n] = { 5, 7, 9, 2, -3, 2, 3, 4, 56, -5 };

    // Вивід масиву
    std::cout << "array: ";
    for (int a = 0; a < n; ++a) {
        std::cout << arr[a] << " ";
    }
    std::cout << std::endl;

    // Знаходження min парний елемент рекурсивно
    int smallestEven = findSmallestEvenElementRecursive(arr, n, 0, INT_MAX);

    // Виведення результату
    std::cout << "mallest even element: " << smallestEven << std::endl;

    return 0;
}