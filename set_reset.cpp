// Name - Avi Sharma
// PRN - 24070123025
// Batch - EnTC - A1 
// Expt - 4B

#include <iostream>
using namespace std;

int main() {
    int position, number;
    cout << "Enter the original number: ";
    cin >> number;

    cout << "Enter the bit position to toggle (1-based index): ";
    cin >> position;

    int toggled = number ^ (1 << (position - 1));

    cout << "Result after toggling bit " << position << " = " << toggled << endl;

    return 0;
}

/*
Sample Output (Checked by Avi Sharma):

Enter the original number: 22
Enter the bit position to toggle (1-based index): 2
Result after toggling bit 2 = 20

----------------------------

Enter the original number: 125
Enter the bit position to toggle (1-based index): 5
Result after toggling bit 5 = 109

--- Program Completed Successfully ---
*/
