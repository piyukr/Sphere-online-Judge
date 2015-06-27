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

//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);
vector<string> vec;
string s;

int main() {
	int l, a, b, ini, cur, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1,
			maximum, minimum, count1 = 0;
	vector<string>::iterator ini_it, cur_it;
	vec.push_back("1111110"); //0
	vec.push_back("0110000"); //1
	vec.push_back("1101101"); //2
	vec.push_back("1111001"); //3
	vec.push_back("0110011"); //4
	vec.push_back("1011011"); //5
	vec.push_back("1011111"); //6
	vec.push_back("1110000"); //7
	vec.push_back("1111111"); //8
	vec.push_back("1111011"); //9
	freopen("text", "r", stdin);
	scanf("%d", &t);
	while (t--) {
		bool flag = true;
		scanf("%d", &n);
		if (n == 1) {
			cin >> s;
			ini_it = find(vec.begin(), vec.end(), s);
			if (ini_it != vec.end()) {
				ini = ini_it - vec.begin();
				if (ini == 0)
					cout << "Case #" << cases++ << ": " << vec[9] << endl;
				else
					cout << "Case #" << cases++ << ": " << vec[ini - 1] << endl;
			} else {
				printf("Case #%d: ERROR!\n", cases++);
				continue;
			}
		} else {
			cin >> s;
			n--;
			ini_it = find(vec.begin(), vec.end(), s);
			if (ini_it != vec.end()) {
				ini = ini_it - vec.begin();
				while (n-- && flag) {
					cur_it = find(vec.begin(), vec.end(), s);
					if (cur_it == vec.end()) {
						flag = false;
						continue;
					}
					cur = cur_it - vec.begin();
					if (ini == 0) {
						if (cur != 9) {
							flag = false;
							continue;
						}
					} else {
						if (cur != ini - 1) {
							flag = false;
							continue;
						}
					}
					ini = cur;
				}
				if (flag == false)
					printf("Case #%d: ERROR!\n", cases++);
				else
					cout << "Case #" << cases++ << ": " << vec[cur - 1] << endl;
			} else {
				printf("Case #%d: ERROR!\n", cases++);
				continue;
			}
		}
	}
	return 0;
}
