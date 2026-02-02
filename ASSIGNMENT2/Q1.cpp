#include <iostream>
using namespace std;
int main() {
    int n = 6;
    int start[6]  = {1, 3, 0, 5, 8, 5};
    int finish[6] = {2, 4, 6, 7, 9, 9};
    int count = 1;                
    int lastFinish = finish[0];   
    cout << "Selected activities:\n";
    cout << "(" << start[0] << ", " << finish[0] << ")\n";
    for (int i = 1; i < n; i++) {
        if (start[i] >= lastFinish) {
            cout << "(" << start[i] << ", " << finish[i] << ")\n";
            lastFinish = finish[i];
            count++;
        }
    }
    cout << "Maximum number of activities = " << count;
    return 0;
}



