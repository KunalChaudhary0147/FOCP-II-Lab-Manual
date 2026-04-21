/*Count and give number of words and number of lines in the file*/

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    ifstream fin("kunal.txt");

    string line;
    int wordCount = 0;
    int lineCount = 0;

    while (getline(fin, line)) {
        lineCount++;
        wordCount += count(line.begin(), line.end(), ' ') + 1; 
    }

    cout << "Number of lines: " << lineCount << endl;
    cout << "Number of words: " << wordCount << endl;

    return 0;
}