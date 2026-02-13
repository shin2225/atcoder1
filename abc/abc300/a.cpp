#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int Ans = A + B;
    
    for (int i = 1; i <= N; i++) {
        int c;
        cin >> c;
        if (c == Ans) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}