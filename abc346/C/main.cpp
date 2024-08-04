#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
#include <iomanip>
using namespace std;

#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define FOR(i, a, b) for (int i = (a), i##_len = (b); i <= i##_len; ++i)
#define REV(i, a, b) for (int i = (a); i >= (b); --i)
#define CLR(a, b) memset((a), (b), sizeof(a))
#define DUMP(x) cout << #x << " = " << (x) << endl;
#define INF 1001001001001001001ll
#define fcout cout << fixed << setprecision(12)

//using ll = long long;
//using vi = vector<int>;
//using vl = vector<long long>;
//using vs = vector<string>;
//using vc = vector<char>;
//using vb = vector<bool>;
//using vpii = vector<pair<int, int>>;
//using vpll = vector<pair<long long, long long>>;
//using vvi = vector<vector<int>>;
//using vvl = vector<vector<long long>>;
//using vvc = vector<vector<char>>;
//using vvb = vector<vector<bool>>;
//using vvvi = vector<vector<vector<int>>>;
//using pii = pair<int, int>;

template <typename T>
inline bool chmax(T &a, T b) {
    return ((a < b) ? (a = b, true) : (false));
}
template <typename T>
inline bool chmin(T &a, T b) {
    return ((a > b) ? (a = b, true) : (false));
}


void solve(long long N, long long K, std::vector<long long> A){

    set<long long> s(A.begin(), A.end());
    vector<long long> v(s.begin(), s.end());
    long long sum1 = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] <= K){
            sum1 += v[i];
        }
    }

    long long sum2 = K * (K+1) / 2;

    cout << sum2 - sum1 << endl;
}

// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
        long long N;
    cin >> N;
    long long K;
    cin >> K;
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        cin >> A[i];
    }
        solve(N, K, A);
        return 0;
}
