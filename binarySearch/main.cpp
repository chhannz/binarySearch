//
//  main.cpp
//  binarySearch
//
//  Created by Hanny Haryanto on 02/01/19.
//  Copyright © 2019 cornerstonecornerstone. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

long int binarySearch(vector <int> numb, unsigned long int low, unsigned long int high, int key);

vector<int> number {2,5,8,12,16,23,38,56,72,91};

int main(int argc, const char * argv[]) {
    int numberToFound;
    long int result;
    unsigned long int index;
    cout << "Input number to be found : ";
    cin >> numberToFound;
    index = binarySearch(number, 0, number.size()-1, numberToFound);
    if (index == -1) cout << "not found !" << endl;
        else {
            result = number[index];
            cout << "-->found : " << result << endl;
            cout << "-->index : " << index << endl;
        }
    //system("pause");
    return 0;
}

long int binarySearch (vector<int> numb, unsigned long int low, unsigned long int high, int key) {
    unsigned long int mid = (low + high) / 2;
    while (low <= high) {
        if (numb[mid] < key) {
            low = mid + 1;
            mid = (low + high) / 2;
        } else if (numb[mid] > key) {
            high = mid - 1;
            mid = (low + high) / 2;
        } else return mid;
    }
    
    return -1;
}
