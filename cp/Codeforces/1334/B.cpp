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
#define MAXN 100000000000000000
 
int t, n, x;
float y;
 
int main(){
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &x);
        vector<float> nums;
        while(n--){
            scanf("%f", &y);
            nums.push_back(y);
        }
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        double sum = 0;
        int k = 0;
        FOR(i,0, nums.size()){
            float p = (sum + nums[i]) / (k + 1);
            if( p >= x ){
                sum += nums[i];
                ++k;
            }
        }
        printf("%d\n", k);
    }
    return 0;
}