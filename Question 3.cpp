#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> queue1;
    queue<int> queue2;

    for (int i = 0; i < 6; i++) {
        int x = i + 1;
        queue1.push(x);
    }

    int n = queue1.size();
    for (int i = 0; i < n / 2; i++) {
        queue2.push(queue1.front());
        queue1.pop();
    }

    while (!queue1.empty() && !queue2.empty()) {
        int q = queue2.front();
        queue2.pop();
        queue1.push(q);

        int z = queue1.front();
        queue1.pop();
        queue1.push(z);
    }

    while (!queue1.empty()) {
        cout << queue1.front() << "\t";
        queue1.pop();
    }

 return 0;
}
