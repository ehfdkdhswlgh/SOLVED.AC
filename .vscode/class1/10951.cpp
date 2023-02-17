#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    //입력 개수 모를 때 처리
    int A, B;

    while(cin >> A >> B)
    {
        cout << A + B << '\n';
    }
   

    /* 또다른 방법
        while (!(cin >> a >> b).eof()) {	// 혹은 eof() 대신 fail()을 사용해도 된다.
            cout << a + b << "\n";
        }
    */

}