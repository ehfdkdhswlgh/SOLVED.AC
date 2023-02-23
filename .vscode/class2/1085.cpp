#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int x, y, w, h;
    
    cin >> x >> y >> w >> h ;

    int w_x = w - x;
    int h_y = h - y;

    int min = x;
    
    if(y < min)
    {
        min = y;
    }
    if(w_x < min)
    {
        min = w_x;
    }
    if(h_y < min)
    {
        min = h_y;
    }

    cout << min;
    
}