/*
Một xâu kí tự đc gọi là mật khẩu "an toàn" nếu xâu có độ dài ít nhất = 6
và xâu chứa ít nhất 1 chữ cái hoa (A...Z) 1 chữ cái thường (a...z)
1 chữ số (1...9)
VD " a1B2C3", "tinHoc4" là 2 mk "an toán"
còn "B12C", "a1b2c3", "ABC123", "tinHOc" đều k fai mk "an toàn"

cho 1 xâu S chỉ gồm các ký tự chữ cái HOA, thường và số
hãy đoán mk = cách đếm xem có bn cặp chỉ số (i,j) tm dk
0<=i<j<strlen(S) và xâu con liên tiếp của S từ i đến j là mk "an toàn"

input: gồm 1 dòng duy nhất chứa xâu S độ dài k quá 100

output: 1 số nguyên dương duy nhất là số lượng cấp chỉ số (i,j) tính đc

input: abc3456789PQ

output: 6

Gợi ý: Viết hàm bool check_pass (string, int i, int j)
kt xem chuỗi con từ chỉ số i đến chỉ số j của xâu s có fai là mk "an toàn"
*/

#include <iostream>
#include <cctype> // isupper() , islower(), isdigit()

using namespace std;

int count_pass (const string s);
bool check_pass (const string s, const int left, const int right);

int main(){
    string s;
    cin >> s;

    cout<< count_pass(s);

    return 0;
}

int count_pass (const string s){
    int n = s.size();
    int count =0;
    for (int left = 0 ;left <= n-6; left++){
        for ( int right = left + 5; right < n ; right++)
            if (check_pass(s, left, right) ) {
                count += n-right;
                break;
            }
      
    }
    return count;  
}
bool check_pass (const string s, const int left, const int right)
{
    bool hoa = false;
    bool thuong = false;
    bool so = false;
    for (int i = left; i <= right; i++ )
    {
        if ( isupper(s[i] ) ) hoa = true;
        if ( islower(s[i] ) ) thuong = true;
        if ( isdigit(s[i] ) ) so = true;
    }
    return (so && hoa && thuong);
}