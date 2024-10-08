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
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }

        if(N>=3){
            vector<int> d(N-1, 0);
            for(int i = 0; i < N-1; i++){
                d[i] = A[i+1] - A[i];
            }

            vector<int> dd(N-2, 0);
            for(int i = 0; i < N-2; i++){
                dd[i] = d[i] - d[i+1];
            }

            long long cnt = 0;
            long long ans = 0;
            for(int i = 0; i < N-2; i++){
                if(dd[i] == 0){
                    cnt++;
                }else{
                    if(cnt > 0){
                        ans += cnt * (cnt + 1) / 2;
                        cnt = 0;
                    }
                }
            }
            if(cnt > 0){
                ans += cnt * (cnt + 1) / 2;
            }
            ans += N + N - 1;
            cout << ans << endl;
        }else if(N==2){
            cout << 3 << endl;
        }else{
            cout << 1 << endl;
        }

        return 0;
}
