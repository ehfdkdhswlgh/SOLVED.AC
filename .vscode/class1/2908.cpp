#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int A, B;

    cin >> A >> B;

    string string_A = to_string(A);
    string string_B = to_string(B);

    char reverse_A[string_A.length()];
    char reverse_B[string_B.length()];
    
    for(int i = string_A.length() - 1, j = 0; i >= 0; i--)
    {
        reverse_A[j] = string_A[i];
        j++;
    }

    for(int i = string_B.length() - 1, j = 0; i >= 0; i--)
    {
        reverse_B[j] = string_B[i];
        j++;
    }

    int reverse_A_int = atoi(reverse_A);
    int reverse_B_int = atoi(reverse_B);

    if(reverse_A_int > reverse_B_int)
    {
        cout << reverse_A_int;
    }
    else
    {
        cout << reverse_B_int;
    }

}