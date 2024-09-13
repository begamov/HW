#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    cout<<((50-(x%50))%50);
    return 0;
}
