#include <bits\stdc++.h>
using namespace std;

// void swapping(int p1, int p2) //pass by value
// {
//     int temp = p1;
//     p1 = p2;
//     p2 = temp;
//     cout << p1 << " " << p2 << endl;
// }

// void swapping(int *p1, int *p2) //pass by pointer
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
    
// }

// void swapping(int &p1, int &p2) //pass by reference
// {
//     int temp = p1;
//     p1 = p2;
//     p2 = temp;
    
// }

void pass (vector<int> &temp) {
    for (int i = 0; i < 5; i++) {
        temp[i] = 20;
    }
}

void doub (int p[]) {
    for (int i = 0; i < 5; i++) {
        p[i] *= 2;
    }
}

int main() {

    // int first = 10, second = 20;
    // swapping(first,second);
    // cout << first << " " << second;

    // int first = 10, second = 20;
    // swapping(&first,&second);
    // cout << first << " " << second;

    //reference variable
    // int num = 10;
    // int &temp = num; //num and temp are same
    // cout << temp << endl;
    // temp++;
    // cout << num << endl;
    // cout << &temp << " " << &num << endl;
    
    // int first = 10, second = 20;
    // swapping(first,second);
    // cout << first << " " << second << endl;

    // vector<int> v (5,0);
    // pass(v);
    // for (int i = 0; i < 5; i++) {
    //     cout << v[i] << " ";
    // }

    int arr[5] = {1,2,3,4,5};
    doub(arr);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}