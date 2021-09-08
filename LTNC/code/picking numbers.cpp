/*
cho mảng nguyên n ptu
in ra độ dài lớn nhất của tập con mà các phần tử trg đó đều cách nhau 1 đơn vị
*/

// https://www.hackerrank.com/challenges/picking-numbers/problem

#include <iostream>
#include <vector>
using namespace std;

int pickingNumbers(vector<int> a) {
    int count[101]={0};
    for (int i = 0 ; i < a.size() ; i++){
        count[a[i]]++;
    }
    int max = 0;
    for (int i = 0 ; i < 101 - 1 ; i++){
        if (count[i] + count[i+1] > max)
            max = count[i] + count[i+1];
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    vector <int> a;
    for (int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << pickingNumbers(a);
    return 0;
}