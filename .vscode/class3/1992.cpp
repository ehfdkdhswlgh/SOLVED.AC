#include <iostream>
#include <string>

using namespace std;

int n, input;
int arr[65][65];

bool isEqual(int row, int col, int size)
{

    int first = arr[row][col];

    for(int i = row; i < row + size; i++)
    {
        for(int j = col; j < col + size; j++)
        {
            if(arr[i][j] != first)
            {
                return false;
            }
        }
    }

    return true;
}


string qt(int row, int col, int size)
{
    if(size == 1 || isEqual(row, col, size))
    {
        return to_string(arr[row][col]);
    }
    
    string str = "(";
    int div_size = size / 2;

    if(isEqual(row, col, div_size))
    {
        str += to_string(arr[row][col]);
    }  
    else
    {
        str += qt(row, col, div_size);
    }


    if(isEqual(row, col + div_size, div_size))
    {
        str += to_string(arr[row][col + div_size]);
    }
    else
    {
        str += qt(row, col + div_size, div_size);
    }


    if(isEqual(row + div_size, col, div_size))
    {
        str += to_string(arr[row + div_size][col]);
    }
    else
    {
        str += qt(row + div_size, col, div_size);
    }


    if(isEqual(row + div_size, col + div_size, div_size))
    {
        str += to_string(arr[row + div_size][col + div_size]);
    }
    else
    {
        str += qt(row + div_size, col + div_size, div_size);
    }

    return str + ")";
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%1d", &arr[i][j]); // 한자리씩 받기
        }
    }

    cout << qt(0, 0, n);

}