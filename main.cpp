#include "libs/template.h"
#include "LabExercises/Lab1/InLab/Function_InLab.h"

using namespace std;

int main() {
    int n, shift;
    cin >> n >> shift;
    char *text = new char[n + 1];
    for (int i = 0; i < n; i++) cin >> text[i];
    text[n] = 0;

    encrypt(text, shift);
    cout << "Encrypted text: " << text << '\n';
    decrypt(text, shift);
    cout << "Decrypted text: " << text;

    delete[] text;
    return 0;
}
