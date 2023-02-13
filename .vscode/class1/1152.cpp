#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string input, string delimiter);

int main()
{
    string str;
    
    //문자열 입력 받기
    getline(cin, str);
    
    int cnt = 1;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            cnt++;
        }
    }

    if(str[0] == ' '){
        cnt--;
    }

    if(str[str.length() - 1] == ' '){
        cnt--;
    }
   
    
    printf("%d",cnt);
    

    return 0;
}



