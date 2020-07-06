//
//  main.cpp
//  6359-b2-dp
//
//  Created by deok on 2020/07/06.
//  Copyright © 2020 deok. All rights reserved.
//

#include <iostream>
using namespace std;

bool arr[101];

int countRunner(int n) {
    int cnt = 0;
    for(int i=1; i<=n; i++) {
        if(arr[i])
            cnt++;
    }
    return cnt;
}

int main(int argc, const char * argv[]) {
    int tCase, n;
    
    cin >> tCase;
    while(tCase--) {
        cin >> n;
        for(int i=1; i<101; i++) {
            arr[i] = false;
        }
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                if(i*j>n)
                    break;
                arr[i*j] = !arr[i*j];
            }
        }
        cout << countRunner(n) << '\n';
    }
    
    return 0;
}
