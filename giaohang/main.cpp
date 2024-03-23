#include <iostream>

using namespace std;

int cost(int m, int r) {
    if (m <= 0 || r <= 0) {
        return -1; 
    } else if (m <= 10) {
        if (r <= 100) {
            return 50;
        } else if (r <= 500) {
            return 100;
        } else {
            return 200;
        }
    } else {
        if (r <= 100) {
            return 100;
        } else if (r <= 500) {
            return 200;
        } else {
            return 500;
        }
    }
}

int main() {
    int m, r;
    cin >> m;
    cin >> r;
    int totalCost = cost(m, r);
    if (totalCost == -1) {
        cout << "Đầu vào không hợp lệ!" << endl;
    } else {
        cout << totalCost << endl;
    }
    
    return 0;
}
