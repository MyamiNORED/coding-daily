#include "console.h"
#include "simpio.h"
using namespace std;

int main() {

    const int sentinel = 0;
    int N = 0;

    cout << "This program finds the largest program in a list : " << endl;
    cin >> N;
    int max = N;
    int s = -100; // Initialize s to a small value

    while (N != sentinel) {
        if (N > max) {
            s = max; // Update s only when a new max is found
            max = N;
        } else if (N > s && N < max) {
            s = N; // Update s only if N is between max and s
        }
        cin >> N;
    }

    cout << " the largest : " << max << endl;
    cout << " the second largest : " << s << endl;
    return 0;
}
/*223 251 317
    636
    766
    607
    607
    0  */
