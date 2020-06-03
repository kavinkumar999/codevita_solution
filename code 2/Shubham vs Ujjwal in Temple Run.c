/*
Shubham and Ujjwal challenged each other in the game "Temple Run" .

Ujjwal set some random m targets. Shubham played the game n times making random scores on each turn.

Can you tell at which turn Shubham will be able to achieve Ujjwal's target ?

Input Format

First line contains n, number of games played by Shubham. Next line contains n integers, denoting score of each game. Next line contains m, the no of target scores set by Ujjwal. Next m lines contain an integer each representing the target score.

Constraints

1<=n<=100000 1<=A[i]<=1000
1<=m<=1000000 1<=Target<=10^9

Output Format

For each m, print the turn where the target is achieved or -1 if the target can't be achieved.

Sample Input 0

5
1 2 1 3 4
4
4
2
10
15
Sample Output 0

3
2
5
-1


*/

#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int sym[n];
    vector<int>v;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>sym[i];
        sum=sum+sym[i];
        v.push_back(sum);
    }
    int n2;
    cin>>n2;
    int uj[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>uj[i];
    }
    for(int i=0;i<n2;i++)
    {
        vector<int>::iterator lower=lower_bound(v.begin(),v.end(),uj[i]);
        if(lower!=v.end())
        {
            cout<<(lower-v.begin()+1)<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
