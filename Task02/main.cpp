#include "logic.h"

using namespace std;

int main() {
    double array[6];
    int size = 3;
    double arithmetic_mean = 0;
    double num_1, num_2, num_3;
    double sum_mean = 0;

    cout << "Input your 3 numbers: ";
    cin >> num_1 >> num_2 >> num_3;

    if (num_1 <= 0 || num_2 <= 0 || num_3 <= 0) {
        return -1;
    }

    is_same_elements(array, size, num_1, num_2, num_3, arithmetic_mean, sum_mean);

    return 0;
}