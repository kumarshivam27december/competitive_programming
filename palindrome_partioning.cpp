#include <bits/stdc++.h>
using namespace std;
vector<vector<string>>ans;
bool is_pal(string &s, int start, int end) {
    while (start <= end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
void generate(string &s, vector<string>&sub, int ind) {
    if (ind == s.size()) {
        ans.push_back(sub);
        return;
    }

    for (int i = ind; i < s.size(); ++i) {
        if (is_pal(s, ind, i)) {
            sub.push_back(s.substr(ind, i - ind + 1));
            generate(s, sub, i + 1);
            sub.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) {
    vector<string>sub;
    generate(s, sub, 0);
    return ans;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    string s;
    // cin >> s;
    getline(cin, s);
    vector<vector<string>> bns = partition(s);
    for (int i = 0; i < bns.size(); i++) {
        for (int j = 0; j < bns[i].size(); j++) {
            cout << bns[i][j] << " ";
        } cout << endl;
    }
}