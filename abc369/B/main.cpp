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

template <typename T>
inline bool chmax(T &a, T b) {
    return ((a < b) ? (a = b, true) : (false));
}
template <typename T>
inline bool chmin(T &a, T b) {
    return ((a > b) ? (a = b, true) : (false));
}



// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
        // Failed to predict input format
        int N;
        cin >> N;
        vector<int> A(N, 0);
        vector<char> S(N, 0);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            cin >> S[i];
        }

        int H=0;
        int tempRight=0;
        int tempLeft=0;

        for(int i=0;i<N;i++){
            if(S[i]=='R'){
                if(tempRight==0){
                    tempRight=A[i];
                }else{
                    if(tempRight>A[i]){
                        H+=tempRight-A[i];
                        tempRight=A[i];
                    }else{
                        H+=A[i]-tempRight;
                        tempRight=A[i];
                    }
                }
            }else{
                if(tempLeft==0){
                    tempLeft=A[i];
                }else{
                    if(tempLeft>A[i]){
                        H+=tempLeft-A[i];
                        tempLeft=A[i];
                    }else{
                        H+=A[i]-tempLeft;
                        tempLeft=A[i];
                    }
                }
            }
        }
        cout << H << endl;
        return 0;
}
