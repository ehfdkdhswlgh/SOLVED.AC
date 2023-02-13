#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;
    
    //소숫점 설정
    cout.precision(10); 

    cout << A / (double)B;

    return 0;
}