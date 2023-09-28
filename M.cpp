#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int cas = 1;
    while (t--) {
        int ans = 0;
        int n;
        cin>>n;
        string s;
        cin >> s;
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == '#') {
                continue;
            }
            if (s[i] == '.') {
                ans++;
            }
            i += 2;
        }
        cout << "Case " << cas++ << ": " << ans << endl;
    }
    return 0;
}
