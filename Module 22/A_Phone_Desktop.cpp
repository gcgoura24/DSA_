#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) 
    {
        int x, y;
        cin >> x >> y;

        int screens = 0;

        while (x > 0 || y > 0) {
            // Try placing up to 2 2x2 icons (each takes 4 cells)
            int put_y = min(y, 2);
            int used_cells = put_y * 4;
            int remaining_cells = 15 - used_cells;
            // Place as many 1x1 icons as possible in the remaining cells
            int put_x = min(x, remaining_cells);

            x -= put_x;
            y -= put_y;
            screens++;
        }

        cout << screens << endl;
    }

    return 0;
}
