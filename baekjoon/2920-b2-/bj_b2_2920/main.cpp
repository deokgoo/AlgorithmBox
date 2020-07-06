//
//  main.cpp
//  bj_b2_2920
//
//  Created by deok on 2020/06/29.
//  Copyright © 2020 deok. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[8];
    int asc[8] = {1,2,3,4,5,6,7,8};
    int desc[8] = {8,7,6,5,4,3,2,1};
    string ans[3] = {"ascending", "descending", "mixed"};
    for(int i=0; i<8; i++) {
        cin >> arr[i];
    }
    
    if(equal(begin(arr), end(arr), begin(asc))) {
        cout << ans[0];
    } else if(equal(begin(arr), end(arr), begin(desc))) {
        cout << ans[1];
    } else {
        cout << ans[2];
    }
    return 0;
}
