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
//
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



// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){

    int N;
    cin >> N;
    int K;
    cin >> K;
    vector<int> R(N, 0);
    REP(i, N) {
        cin >> R[i];
    }

    string S;
    bool flag = false;

    if(N == 1){
        for(int i=1; i<=R[0]; i++){
            if(i % K==0){
                flag = true;
                cout << i << endl;
            }
        }
        if(flag == false){
                    cout << endl;
                }
        return 0;
    }

    if(N == 2){
        for(int i=1; i<=R[0]; i++){
            for(int j=1; j<=R[1]; j++){
                if((i+j) % K==0){
                    flag = true;
                    cout << i << ' ' << j << endl;
                }
            }
        }
        if(flag == false){
            cout << endl;
        }
        return 0;
    }

    if(N == 3){
        for(int i=1; i<=R[0]; i++){
            for(int j=1; j<=R[1]; j++){
                for(int k=1; k<=R[2]; k++){
                    if((i+j+k) % K==0){
                        flag = true;
                        cout << i << ' ' << j << ' ' << k << endl;
                    }
                }
            }
        }
        if(flag == false){
                    cout << endl;
                }
        return 0;
    }

    if(N == 4){
        for(int i=1; i<=R[0]; i++){
            for(int j=1; j<=R[1]; j++){
                for(int k=1; k<=R[2]; k++){
                    for(int l=1; l<=R[3]; l++){
                        if((i+j+k+l) % K==0){
                            flag = true;
                            cout << i << ' ' << j << ' ' << k << ' ' << l << endl;
                        }
                    }
                }
            }
        }
        if(flag == false){
                    cout << endl;
                }
        return 0;
    }

    if(N == 5){
        for(int i=1; i<=R[0]; i++){
            for(int j=1; j<=R[1]; j++){
                for(int k=1; k<=R[2]; k++){
                    for(int l=1; l<=R[3]; l++){
                        for(int m=1; m<=R[4]; m++){
                            if((i+j+k+l+m) % K==0){
                                flag = true;
                                cout << i << ' ' << j << ' ' << k << ' ' << l << ' ' << m << endl;
                            }
                        }
                    }
                }
            }
        }
        if(flag == false){
                    cout << endl;
                }
        return 0;
    }

    if(N == 6){
        for(int i=1; i<=R[0]; i++){
            for(int j=1; j<=R[1]; j++){
                for(int k=1; k<=R[2]; k++){
                    for(int l=1; l<=R[3]; l++){
                        for(int m=1; m<=R[4]; m++){
                            for(int n=1; n<=R[5]; n++){
                                if((i+j+k+l+m+n) % K==0){
                                    flag = true;
                                    cout << i << ' ' << j << ' ' << k << ' ' << l << ' ' << m << ' ' << n << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
        if(flag == false){
                    cout << endl;
                }
        return 0;
    }

    if(N == 7){
        for(int i=1; i<=R[0]; i++){
            for(int j=1; j<=R[1]; j++){
                for(int k=1; k<=R[2]; k++){
                    for(int l=1; l<=R[3]; l++){
                        for(int m=1; m<=R[4]; m++){
                            for(int n=1; n<=R[5]; n++){
                                for(int o=1; o<=R[6]; o++){
                                    if((i+j+k+l+m+n+o) % K==0){
                                        flag = true;
                                        cout << i << ' ' << j << ' ' << k << ' ' << l << ' ' << m << ' ' << n << ' ' << o << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if(flag == false){
                    cout << endl;
                }
        return 0;
    }

    if(N == 8){
        for(int i=1; i<=R[0]; i++){
            for(int j=1; j<=R[1]; j++){
                for(int k=1; k<=R[2]; k++){
                    for(int l=1; l<=R[3]; l++){
                        for(int m=1; m<=R[4]; m++){
                            for(int n=1; n<=R[5]; n++){
                                for(int o=1; o<=R[6]; o++){
                                    for(int p=1; p<=R[7]; p++){
                                        if((i+j+k+l+m+n+o+p) % K==0){
                                            flag = true;
                                            cout << i << ' ' << j << ' ' << k << ' ' << l << ' ' << m << ' ' << n << ' ' << o << ' ' << p << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if(flag == false){
                    cout << endl;
                }
        return 0;
    }
        // Failed to predict input format
        return 0;
}
