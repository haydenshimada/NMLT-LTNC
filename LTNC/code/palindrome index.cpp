/*
Một palindrome là một từ, số , cụm từ hoặc chuỗi
mà đọc xuôi hay ngược cx như nhau
chẳng hạn như madam hoặc racecar
Ngoài ra còn có các palindromes số, 
bao gồm tem ngày / giờ sử dụng các chữ số ngắn 
11/11/11 11:11 và các chữ số dài 02/02/2020. 
Các palindromes độ dài câu bỏ qua viết hoa, dấu câu và ranh giới từ.

Cho 1 string gồm các chứ từ a-z 
xác định index mà ở đó có thể loại bỏ để đc string palindrome
nếu string đã là 1 palindrome hoặc k có giải phắp, in ra -1
*/

/*
Sample Input
    STDIN   Function
    -----   --------
    3       q = 3
    aaab    s = 'aaab' (first query)
    baa     s = 'baa'  (second query)
    aaa     s = 'aaa'  (third query)

Sample Output
    3
    0
    -1

Explanation
    Query 1: "aaab"
Removing 'b' at index  results in a palindrome, so return .
    Query 2: "baa"
Removing 'b' at index  results in a palindrome, so return .
    Query 3: "aaa"
This string is already a palindrome, so return . 
Removing any one of the characters would result in a palindrome, 
but this test comes first.
*/

#include <iostream>
using namespace std;

int palindromeIndex(string s) {
    int n = s.length(), x, y;
    for(int i = 0, j = n-1; i < j ; i++, j--){
        if(s[i] != s[j]){
            string s1 = s;
            s1.erase(s1.begin() + i);
            for(x = 0 ,y = n-2 ; x < y ; x++ , y--){
                if(s1[x] != s1[y])
                    break;             
            }
            if(x >= y)        
                return i;            
            string s2 = s;
            s2.erase(s2.begin() + j);
            for(x = 0, y = n - 2;x < y; x++, y--){
                if(s2[x] != s2[y])
                    break;                
            }         
            if(x >= y)        
                return j;
            else
                return -1;
        }
    }
    return -1; 
}

int main(){
    string s;
    cin >> s;
    cout << palindromeIndex(s);
}