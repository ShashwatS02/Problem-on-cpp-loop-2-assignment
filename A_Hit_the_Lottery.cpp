#include<iostream>
int main(){
    int n, b = 0, a[] = {100,20,10,5,1};
    std::cin >> n;
    for(int x : a){
        b += n / x;
        n %= x;
    }
    std::cout << b << '\n';
}
