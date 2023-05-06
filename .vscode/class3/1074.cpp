#include <iostream>
#include <math.h>

// https://donggoolosori.github.io/2020/09/22/boj-1074-Z/

using namespace std;

int count = 0;
int N, r, c;



//(row, col)은 해당 사분면의 왼쪽위 좌표
void search(int row, int col, int size)
{

    if(r == row && c == col)
    {
        cout << count;
        return;
    }

    if(r < row + size && r >= row && c < col + size && c >= col) // (r, c)가 해당 사분면에 존재하면
    {
        search(row, col, size / 2);
        search(row, col + size / 2, size / 2);
        search(row + size / 2, col, size / 2);
        search(row + size / 2, col + size / 2, size / 2);
    }
    else // (r, c)가 범위 내에 없으면
    {
        count += (size * size);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> r >> c;

    search(0, 0, pow(2,N));
}