int countElementsWithSmallerNeighbors(const int arr[], int size) {
    if (size < 3) {
        // Arrays with less than three elements cannot satisfy the condition
        return 0;
    }

    int count = 0;

    for (int i = 1; i < size - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            // Check if both neighboring elements are smaller than the current element
            count++;
        }
    }

    return count;
}