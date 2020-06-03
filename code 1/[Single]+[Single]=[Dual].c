/*
Sushil Pandey wants to discover whether the string he had can be converted to a dual string.

A dual string can be : Example :- fafa , baba, etc.

"balba" can be converted to a dual string by removing 'l'.

Tell Sushil whether he can get a dual string by removing any number of characters possibly zero ?

Input Format

First line contains t no. of cases. Following t lines, each containing a string S.

Note:-Only lowercase alphabets.

Constraints

1<=t<=100

1<=length_of_string<=100

Output Format

Print Yes or No if dual string can be made.

Sample Input 0

3
baba
fafa
a
Sample Output 0

Yes
Yes
No

*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    for(int t=0;t<n;t++)
    {
        string str;
        cin>>str;
        int y=str.length();
        int arr[y+1][y+1]={0};
        int max=0;
        if(y<=1)
        {
            cout<<"No"<<endl;
        }

        else{
                  for(int i=1;i<=y;i++)
                    {
                        for(int j=i+1;j<=y;j++)
                        {
                            if(str.at(i-1)==str.at(j-1) && arr[i][j]<(j-i))
                            {
                                arr[i][j]=arr[i-1][j-1]+1;
                            }
                            if(max<arr[i][j])
                            {
                                max=arr[i][j];
                            }
                        }
                    }
                    int res=y-2*max;
                    if(res==y)
                    {
                        cout<<"No"<<endl;
                    }
                    else{
                        cout<<"Yes"<<endl;
                    }
            }

    }

     return 0;
}
