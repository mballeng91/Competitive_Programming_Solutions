    using namespace std;
    #include <bits/stdc++.h>
    #include <map>
    #include <stdio.h>
    #include <string.h>
    #define all(x) x.begin(), x.end()
    #define sz(x) ((int)x.size())
    #define sqr(x) ((x) * (x))
    #define pb push_back
    #define eps 1e-9
    typedef long long i64;
    typedef unsigned long long ui64;
    typedef string st;
    typedef vector<int> vi;
    typedef vector<st> vs;
    typedef map<int, int> mii;
    typedef map<st, int> msi;
    typedef set<int> si;
    typedef set<st> ss;
    typedef pair<int, int> pii;
    typedef vector<pii> vpii;
    #define FOR(i, a, b) for (int i = a; i < b; i++)
    #define FORD(i, b, a) for (int i = b; i > a; i--)
    #define DEBUG(x) cout << std::setprecision(15) << #x << " = " << x << "\n";
    #define MAXN 200000
     
    int t, n, k;
     
    int main(){
        scanf("%d", &t);
        while(t--) {
            scanf("%d", &n);
            scanf("%d", &k);
            int mul = n - 1;
            int need = (k - 1) / mul;
            printf("%d\n", k + need);            
        }
        return 0;
    }
 
