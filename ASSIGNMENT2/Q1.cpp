#include <iostream>
using namespace std;
int main() {
    int n = 3;
    int m = 50;
    int v[] = {60, 100, 120};
    int weight[] = {10, 20, 40};
    float x[3] = {0, 0, 0};
    int U = m;
    int i;
    for (i = 0; i < n; i++) {
        if (weight[i] > U)
            break;
        x[i] = 1.0;
        U = U - weight[i];
    }
    if (i < n) {
        x[i] = (float)U / weight[i];
    }
    float totalValue = 0;
    for (int i = 0; i < n; i++) {
        totalValue += x[i] * v[i];
    }
    cout << "Max value: " << totalValue << endl;
    return 0;
}

