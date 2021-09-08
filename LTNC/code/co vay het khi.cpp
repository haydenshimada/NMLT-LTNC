/*
Trong 1 bàn cờ vây, 1 quân được gọi là hết khí khi 4 hướng xung quanh nó bị vây quanh bởi quân địch. 
Cho trạng thái 1 bàn cờ vây có kích thước m x n, quân trắng được thể hiện bởi số 1, quân đen được biểu thị bởi số 2, 
các ô không có quân nào được biểu thị bởi số 0. Bạn hãy kiểm tra xem có quân trắng nào bị hết khí hay không ? 
Nếu tồn tại ít nhất 1 quân trắng hết khí thì in ra Yes, còn không thì in ra No.

Ví dụ về khí trong bàn cờ 4 x 4

0 2 0 0

2 1 2 1

0 2 1 2

0 0 0 0

Ta có, quân trắng ở vị trí (1, 1) hết khí, quân trắng ở vị trí (1, 3) còn khí. 

Lưu ý: Chỉ số hàng và cột của mảng được bắt đầu từ 0. Tọa độ (0, 0) là góc trên bên trái.
*/

/*
For example:

Input	    Result
4 4         YES
0 2 0 0
2 1 2 1
0 2 1 2
0 0 0 0

4 4         NO
0 2 0 0
2 1 1 1
0 2 1 2
0 0 0 0

*/

#include <iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0 ; i < m ; i++)
        for (int j = 0 ; j < n ; j++)
            cin >> a[i][j];
    
    int white_player = 1;
    int black_player = 2;
    int check = 0;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            if (a[i][j] == white_player){
                check = 0;
                if (j-1 < 0 || a[i][j-1] == black_player)
                    check++;
                if (j+1 >= n || a[i][j+1] == black_player)
                    check++;
                if (i-1 < 0 || a[i-1][j] == black_player)
                    check++;
                if (i+1 >= m || a[i+1][j] == black_player)
                    check++;
                    
                if (check == 4){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
}