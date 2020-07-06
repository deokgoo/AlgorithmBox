//
//  main.cpp
//  practice_array
//
//  Created by deok on 2020/06/29.
//  Copyright © 2020 deok. All rights reserved.
//

#include <iostream>
using namespace std;

void insert(int idx, int num, int arr[], int& len){
    if(len>idx) {
        for(int i =len;i>idx;i--) {
            arr[i] = arr[i-1];
        }
    }
    arr[idx] = num;
    len++;
}

void remove(int idx, int arr[], int& len){
    
}

int main(int argc, const char * argv[]) {
    int arr[10] = {10, 50, 40, 30, 70, 20};
    int len = 6;
    insert(3, 60, arr, len);
    insert(3, 40, arr, len);
    for(int x: arr) {
        cout<< x << " ";
    }
    remove(4, arr, len);
    
    return 0;
}
