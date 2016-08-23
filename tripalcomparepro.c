#include <bits/stdc++.h>
using namespace std;
/*
    * Vishvdeep Dashadiya
*/
int main() {
 
    int a[3],b[3],Alice = 0,Bob = 0;
 
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
 
    for(int i = 0; i < 3; i++){
        if(a[i] > b[i])
		{
			Alice++;
		}
        else if(a[i] < b[i])
		{
			Bob++;
		}
    }
    cout << Alice << " " << Bob << endl;
    return 0;
}



              