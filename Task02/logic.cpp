#include "logic.h"
using namespace std;

void is_same_elements(double array[], int size, double num_1, double num_2, double num_3, double arithmetic_mean, double sum_mean) {

    if (size <= 0) {
        sum_mean = -1;
        return;
    }

    arithmetic_mean = (num_1 + num_2 + num_3) / 3;

    sum_mean = 0;
    if (abs(num_1) < arithmetic_mean) sum_mean += num_1;
    if (abs(num_2) < arithmetic_mean) sum_mean += num_2;
    if (abs(num_3) < arithmetic_mean) sum_mean += num_3;

    cout << "Arithmetic_mean - " << arithmetic_mean << endl;
    cout << "Sum_mean - " << sum_mean << endl;
}

