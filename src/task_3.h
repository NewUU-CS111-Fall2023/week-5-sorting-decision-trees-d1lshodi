#include <vector>


void rearrangeSoldiers(vector<string>& soldiers) {
    int n = soldiers.size();
    for (int i = 0; i < n - 1; i += 2) {
        swap(soldiers[i], soldiers[i + 1]);
    }
}