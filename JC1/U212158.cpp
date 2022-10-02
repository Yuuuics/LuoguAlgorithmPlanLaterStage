#include <iostream>

using namespace std;
int opr;

int main() {
    ios::sync_with_stdio(false);
    cin >> opr;
    
    switch (opr) {
        case 1:
            cout << "10011" << endl;
            break;
        case 2:
            cout << "1111111111101101" << endl;
            break;
        case 3:
            cout << "1100101010" << endl;
            break;
        case 4:
            cout << "1111110011010110" << endl;
            break;
        case 5:
            cout << "11100010110010" << endl;
            break;
        case 6:
            cout << "0011100010110010" << endl;
            break;
        case 7:
            cout << "26" << endl;
            break;
        case 8:
            cout << "1111111111100110" << endl;
            break;
        case 9:
            cout << "210" << endl;
            break;
        case 10:
            cout << "1111111100101110" << endl;
            break;
        case 11:
            cout << "0" << endl;
            break;
        case 12:
            cout << "0" << endl;
            break;
        case 13:
            cout << "-40" << endl;
            break;
        case 14:
            cout << "10101000" << endl;
            break;

        default:
            break;
    }
    return 0;
}
