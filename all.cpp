#include <bits/stdc++.h>

using namespace std;

set < pair < int, int >> positions(int moves[][2], int c1, int c2) {
    set < pair < int, int >> st;
    for (int i = 0; i < 4; i++) {

        int posX1 = c1 + moves[i][0];
        int posY1 = c2 + moves[i][1];
        st.insert({
            posX1,
            posY1
        });
        int posX2 = c1 + moves[i][1];
        int posY2 = c2 + moves[i][0];
        st.insert({
            posX2,
            posY2
        });
    }

    return st;

}


int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, q1, q2, k1, k2;
        cin >> a >> b >> q1 >> q2 >> k1 >> k2;

        int moves[4][2] = {
            {
                a,
                b
            },
            {
                -1 * a,
                b
            },
            {
                a,
                -1 * b
            },
            {
                -1 * a,
                -1 * b
            }
        };

        set < pair < int, int >> q = positions(moves, q1, q2);
        set < pair < int, int >> k = positions(moves, k1, k2);

        int ans = 0;

        for (auto prq: q) {
            for (auto prk: k) {
                if (prq == prk) ans += 1;
            }
        }

        cout << ans << endl;


    }

}