/* nhập 1 chuổi kí tự (tên ng) thực hiện chuẩn hóa như sau
cắt các dấu cách thừa
viết hoa chữ cái đầu từ
viết thg các chữ cái trong từ;
*/
// toupper(ten[i])->int; tolower(ten[i])->int;
#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    getline (cin, name);
    string ans;
    name=' '+name;
    name +=' ';
    for (int i=0;i<name.length();i++){
        if (name[i]==' ' && name[i+1]!=' ') 
        {
            ans +=' ';
            ans += (char)toupper(name[i+1]);
            i++;
        }
        else if (name[i]!=' ' && name[i+1]!=' ') {
            ans+=(char) tolower(name[i]);
        }
        
    }
    ans.erase(ans.begin());
    cout<<ans;
}