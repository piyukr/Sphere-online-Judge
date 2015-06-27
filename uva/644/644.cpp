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
#include <set>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(i,a,b) for((i)=(a);(i)<=(b);(i)++)
vector<vii> adj_list;

vi dist;

string s, s1;
vector<string> vec;
//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	int l, a, b, c, m, n, i, y, j, k, t, sum = 0, cases = 1, maximum, minimum,
			count1 = 0;
	bool flag;
	//freopen("text", "r", stdin);
	while (1) {
		if (!(cin >> s)) {
			//printf("%s\n", s);
			break;
		}
		//printf("%s\n", s);
		if (s != "9") {
			vec.push_back(s);
			continue;
		} else {
			count1++;
			flag = true;
			rep(i,0,(int)vec.size()-1)
			{
				rep(j,0,(int)vec.size()-1)
				{
					if (i == j)
						continue;
					s1 = vec[j].substr(0, vec[i].length());
					if (s1 == vec[i]) {
						flag = false;
						break;
					}
				}
				if (flag == false)
					break;
			}
			vec.clear();
			if (flag)
				printf("Set %d is immediately decodable\n", count1);
			else
				printf("Set %d is not immediately decodable\n", count1);
		}
	}
	return 0;
}
