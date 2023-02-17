#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	//'a' = 97
    //'z' = 122
    string str;
    cin >> str;


    //알파벳 별 반복
    for(int i = 97; i <= 122; i++)
    {
       //문자열 별 반복
       int j = 0;
       for(; j < str.length(); j++)
       {
            if(str[j] == i)
            {
                cout << j << ' ';
                break;
            }      
       }

       if(j == str.length())
       {
            cout << "-1" << ' '; 
       }
    }

}