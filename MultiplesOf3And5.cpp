#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
#define F first
#define S second

template<class T> ostream& operator<<(ostream &os, vector<T> V) {
    os << "[ ";
    for(auto v : V) os << v << " ";
    os << "]";
	return os;
}
template<class T> ostream& operator<<(ostream &os, set<T> S){
    os << "{ ";
    for(auto s:S) os<<s<<" ";
    return os<<"}";
}
template<class T> ostream& operator<<(ostream &os, multiset<T> S){
    os << "{ ";
    for(auto s:S) os<<s<<" ";
    return os<<"}";
}
template<class L, class R> ostream& operator<<(ostream &os, pair<L,R> P) {
    return os << "(" << P.first << "," << P.second << ")";
}
template<class L, class R> ostream& operator<<(ostream &os, map<L,R> M) {
    os << "{ ";
    for(auto m:M) os<<"("<<m.F<<":"<<m.S<<") ";
    return os<<"}";
}
template<class L, class R> ostream& operator<<(ostream &os, unordered_map<L,R> M) {
    os << "{ ";
    for(auto m:M) os<<"("<<m.F<<":"<<m.S<<") ";
    return os<<"}";
}

// Kevin Mathew T
// Birla Institute of Technology, Mesra
// LinkedIn - https://www.linkedin.com/in/KevinMathewT/
// GitHub - https://github.com/KevinMathewT
// CodeForces - https://codeforces.com/profile/KevinMathew
// CodeChef - https://www.codechef.com/users/KevinMathew
// HackerRank - https://www.hackerrank.com/KevinMathew

const ll N = 600851475143, M = 1e9 + 7, L = 4000000;
ll n, f[N / 10000];

void solve(){
	ll mx = LLONG_MIN;
	for(ll i=2;i*i<=N;i++)
		if(N % i == 0){
			ll c = 0;
			for(ll j=2;j*j<=i;j++)
				if(i % j == 0) c++;
			if(c == 0) mx = max(mx, i);

			i = N / i;
			c = 0;
			for(ll j=2;j*j<=i;j++)
				if(i % j == 0) c++;
			if(c == 0) mx = max(mx, i);

			i = N / i;
		}

	cout << mx << "\n";
}

int main(){
	freopen("input.txt", "r", stdin);		//Comment
	freopen("output.txt", "w", stdout);		//this out.
	ios::sync_with_stdio(false);			//Not
	cin.tie(NULL);							//this.
	cout.tie(0);							//or this.

	// ll T;
	// cin >> T;
	// while(T--)
		solve();

	return 0;
}