#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include <utility>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <cmath>
#include <list>
using namespace std;

#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define for(i,a,b) for((i)=(a);(i)<=(b);(i)++)
vector<vii> adj_list;

vi dist;
string s;
int main(){
	int b, c, m, n, i, y, j, k, t, sum = 0, cases = 1, maximum, minimum, count1 = 0;
	unsigned long long int l,x;
	scanf("%d",&t);
	while(t--){
		l=0;
		scanf("%llu	",&x);
		cin>>s;
		for(i,0,x-1)
			if(s[i]=='1')
				l++;
		printf("%llu\n",(l+l*(l-1)/2));
	}
	return 0;
}
