// Ghi các số từ 1 đến 20 vào 1 file nhị phân
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream myfile ("input1.txt", ios::binary);
    if (myfile) {
        int i = 1 ;
        while (i <= 20){
            myfile.write((char*) &i, sizeof(i));
            i++;
        }
        myfile.close();
    }

    ifstream infile ("input1.txt", ios::binary);
    if (infile){
        
        /*int i;
        while (!infile.eof())
        {
            infile.read((char*) &i, sizeof(i));
            if (infile)
                cout << i << ' ';
        } */

        infile.seekg (0, infile.end);
        int size = infile.tellg();
        infile.seekg (0);

        char buffer[size];
        infile.read (buffer, size);

        puts (buffer);

        infile.close();
    }
    return 0;
}