#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dna;
    cin >> dna;
    int max_repetition = 1;
    int current_repetition = 1;
    char prev_char = dna[0];
    for (int i = 1; i < dna.size(); i++)
    {
        if (dna[i] == prev_char)
        {
            current_repetition++;
        }
        else
        {
            max_repetition = max(max_repetition, current_repetition);
            current_repetition = 1;
            prev_char = dna[i];
        }
    }
    max_repetition = max(max_repetition, current_repetition);
    cout << max_repetition << endl;
    return 0;
}
