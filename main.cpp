#include <iostream>
#include <vector>
#include <string>
#include "Point.h"
#include "Square.h"
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<Square> v;
    v.reserve(n);

    for (int i = 0; i < n; ++i) {
        string name; int x, y; unsigned int side;
        cin >> name >> x >> y >> side;
        Square in(name, x, y, side);
        v.push_back(in);             
    }

    cout << "\n";

    
    cout << "Squares in increasing order of area\n";
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {  
            if (v[j].getArea() > v[j + 1].getArea()) {
                Square tmp = v[j];           
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << v[i].getName() << "(" << v[i].getX() << ", " << v[i].getY()
            << ") side=" << v[i].getSide()
            << ", area=" << v[i].getArea() << "\n";
    }

    cout << "\n";

    
    cout << "Squares in increasing order of max x-coordinate\n";
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            int maxXj = v[j].getX() + v[j].getSide();
            int maxXj1 = v[j + 1].getX() + v[j + 1].getSide();
            if (maxXj > maxXj1) {
                Square tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        int maxX = v[i].getX() + v[i].getSide();
        cout << v[i].getName() << "(" << maxX << ", " << v[i].getY()
            << ") side=" << v[i].getSide()
            << ", area=" << v[i].getArea() << "\n";
    }

    cout << "\n";

    
    cout << "Squares in increasing order of max y-coordinate\n";
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            int maxYj = v[j].getY() + v[j].getSide();
            int maxYj1 = v[j + 1].getY() + v[j + 1].getSide();
            if (maxYj > maxYj1) {
                Square tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        int maxY = v[i].getY() + v[i].getSide();
        cout << v[i].getName() << "(" << v[i].getX() << ", " << maxY
            << ") side=" << v[i].getSide()
            << ", area=" << v[i].getArea() << "\n";
    }

    return 0;
}
