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
    void _R(int &x) { scanf("%d", &x); }
    void _R(ui64 &x) { scanf("%lld", &x); }
    void _R(double &x) { scanf("%lf", &x); }
    void _R(char &x) { scanf(" %c", &x); }
    void _R(char *x) { scanf("%s", x); }
    void _W(const int &x) { printf("%d", x); }
    void _W(const int64_t &x) { printf("%lld", x); }
    void _W(const double &x) { printf("%.16f", x); }
    void _W(const char &x) { putchar(x); }
    void _W(const char *x) { printf("%s", x); }
     
    int t, k, n;

    int main(){
        _R(t);
        while(t--) {
            _R(n);
            _R(k);
            int odd  = n - (k - 1);
            int ev = n - 2*(k-1) ;
            if ( (odd) % 2 == 1 && odd > 0){
                printf("YES\n");
                FOR(i, 0, k - 1){
                    printf("1 ");
                }
                printf("%d\n", n - (k - 1));
            } else {
                if ((ev) % 2 == 0 && ev > 0){
                    printf("YES\n");
                    FOR(i, 0, k - 1){
                        printf("2 ");
                    }
                    printf("%d\n", n-2*(k-1));
                } else {
                    printf("NO\n");
                }
            }
        }
        return 0;
    }

