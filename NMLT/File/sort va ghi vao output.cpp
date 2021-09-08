/* Cho file input.txt
Doc so, sap xep va ghi lai ra file output.txt */
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
    ifstream myfile ("input.txt");
    if (myfile){
        int n;
        myfile >> n;
        int *a = new int [n];
        int i = 0;
        ofstream out_file ("output.txt");
        out_file << n << endl;
        while (n--)
        {
            myfile >> a[i++];
        }
        sort (a, a+i);
        
        for (int j = 0 ; j < i ; j++)
            out_file << a[j] <<' ';
        
        delete [] a;
        a = NULL;
        
        out_file.close();
        myfile.close();
    }
    
    return 0;
}