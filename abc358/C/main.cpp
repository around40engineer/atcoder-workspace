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

using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
using vs = vector<string>;
using vc = vector<char>;
using vb = vector<bool>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<long long, long long>>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<long long>>;
using vvc = vector<vector<char>>;
using vvb = vector<vector<bool>>;
using vvvi = vector<vector<vector<int>>>;
using pii = pair<int, int>;

template <typename T>
inline bool chmax(T &a, T b) {
    return ((a < b) ? (a = b, true) : (false));
}
template <typename T>
inline bool chmin(T &a, T b) {
    return ((a > b) ? (a = b, true) : (false));
}


void solve(long long N, long long M, std::vector<std::string> S){
    int minCount=N;
    for(int i = 0;i<(1<<N);i++){
        long long p= 0;
        for(int j=0;j<N;j++){
            if(i&(1<<j)){
                for(int k =0;k<M;k++){
                    if(S[j][k]=='o'){
                        p = p|(1<<k);
                    }
                }
            }
        }
        if(p == (1<<M)-1){
            int count =0;
            for(int j=0;j<N;j++){
                if(i&(1<<j)){
                    count += 1;
                }
            }
            if(minCount>count){
                minCount = count;
            }
        }
    }
    cout << minCount << endl;
    // long long maxCount = 0;
    // long long index = 0;
    
    // for(long long i=0; i<N; i++){
    //     long long q = 0;
    //     long long r =0;
    //     for(long long j = 0; j<M; j++){
    //         if(S[i][j] == 'o'){
    //             q = q|(1<<j);
    //         }
    //     }
    //     r = p|q;
    //     long long count = 0;
    //     for(long long j = 0; j<M; j++){
    //         if((r&(1<<j))!= 0){
    //             count += 1;
    //         }
    //     }
    //     if(maxCount<count){
    //         maxCount = count;
    //         index = i;
    //     }else if(maxCount == count){

    //     }
    // }
    
    // for(long long j = 0; j<M; j++){
    //         if(S[index][j]=='o'){
    //             p = p|(1<<j);
    //         }
    // }
    // shopCount += 1;
    // if(maxCount == M){
    //     cout << shopCount << endl;
    //     return;
    // }else{
    //     solve(N,M,S,p,shopCount);
    // }
}

// Generated by 2.13.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
        long long N;
    cin >> N;
    long long M;
    cin >> M;
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        cin >> S[i];
    }
        solve(N, M, S);
        return 0;
}
