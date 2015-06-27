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

vi dist,set;
priority_queue<pair<int,pair < int,int > > > pq;
int main(){
	int l, b,u,v, c, m, a,cost,n, i, x, y, j, k, t, sum = 0, cases = 1, maximum, minimum, count1 = 0;
	while(1){
		scanf("%d %d",&n,&m);
		if(n==0 && m==0) break;
		set.resize(n);
		while(m--){
			scanf("%d%d%d",&a,&b,&cost);
			pq.push(make_pair(-1*cost,make_pair(a,b)));
		}
		for(i,0,m-1)
			set[i]=i;
		pair<int,pair < int,int > > p;
		while(!pq.empty()){
			p=pq.top();

		}
	}
	return 0;
}
