/*
 * Author:Muxtorov Dilshod
 * Date:16.11.2023
 * Name:
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"

using namespace std;
int main() {
    std::cout << "Task 1" << std::endl;
    vector<string> books = {
        "Catcher in the Rye",
        "To Kill a Mockingbird",
        "The Great Gatsby",
        "Moby Dick"
    };
    cout << "Original list of book titles:" << endl;
    for (const auto& book : books) {
        cout << book << endl;
    }

    bubbleSort(books);

    cout << "\nSorted list of book titles:" << endl;
    for (const auto& book : books) {
        cout << book << endl;
    }
    
    std::cout << "Task 2" << std::endl;

    vector<int> denominations = {8, 3, 12, 6, 1};

    cout << "Original list of denominations:" << endl;
    for (const auto& denomination : denominations) {
        cout << denomination << endl;
    }

    selectionSort(denominations);
    cout << "\nSorted list of denominations:" << endl;
    for (const auto& denomination : denominations) {
        cout << denomination << endl;
    }
    std::cout << "Task 3" << std::endl;

    vector<string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};

    cout << "Original list of soldiers:" << endl;
    for (const auto& soldier : soldiers) {
        cout << soldier << endl;
    }
    rearrangeSoldiers(soldiers);
    cout << "\nRearranged list of soldiers:" << endl;
    for (const auto& soldier : soldiers) {
        cout << soldier << endl;
    }
    std::cout << "Task 4" << std::endl;
    int arr[] = {5, 2, 8, 1, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    int result = countElementsWithSmallerNeighbors(arr, size);
    std::cout << "\nCount of elements with smaller neighbors: " << result << std::endl;

    
    std::cout << "Task 5" << std::endl;
    
    
    return 0;
}
