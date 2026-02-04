#include <iostream>
#include <algorithm>
int main() {
    int v[4], r = 0;
    for (int& x : v) std::cin >> x;
    std::sort(v, v+4);
    for (int i = 1; i < 4; ++i) r += v[i] == v[i-1];
    std::cout << r << '\n';
}
