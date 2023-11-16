#include <vector>


void selectionSort(vector<int>& denominations) {
    int n = denominations.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }
        swap(denominations[i], denominations[minIndex]);
    }
}