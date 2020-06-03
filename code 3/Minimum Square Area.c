/*
The students of 'IERT , Allahabad' are enjoying their summer holidays around the city in Allahabad.

If their locations are mapped on a 2D - coordinate system , can you tell the minimum area of square that can accomodate all of them?

Note:- The edges of square will be parallel to the coordinate axes.

Input Format

The first line of the input contains T, denoting the number of test cases.

Each test case consists of a single positive integer N denoting the number of students around the city.

Each of the next N lines contains two integers xi and yi denoting the coordinates of the ith student.

Constraints

1<=T<=5
1<=N<=10^5
-10^9<=xi,yi<=10^9
Output Format

For each test-case, output a single non-negative integer denoting the minimum area of the square.

Sample Input 0

2
4
-1 -1
1 1
1 -1
-1 1
3
0 0
1 1
2 2
Sample Output 0

4
4
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr1[n],arr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i]>>arr2[i];
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        long long int r=arr1[n-1]-arr1[0];
        long long int s=arr2[n-1]-arr2[0];
        long long int ans=max(r,s);
        cout<<ans*ans<<endl;
    }
    return 0;
}
