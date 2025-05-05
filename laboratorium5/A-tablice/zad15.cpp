/* Karolina Wrzalik
14.04.2025 */

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

    const int N = 10;
    vector<vector<int>> nums(N, vector<int>(2));

    for (int i = 0; i < N; ++i) {
        nums[i][0] = i;
        nums[i][1] = i * i;
    }

    for (int i = 0; i < N; ++i) {
        cout << setw(3) << nums[i][0] << setw(3) << nums[i][1];
        for (int j = 2; j < N; ++j)
            cout << setw(3) << char(178); cout << '\n';
    }

    return 0;
}