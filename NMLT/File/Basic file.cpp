#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outfile;
    ifstream myfile ("input.txt");
    if (myfile){
        int n;
        myfile >> n;
        while (n--)
        {
            int t;
            myfile >> t;
            cout << t << ' ';
        }
        
        myfile.close();
    }
    return 0;
}