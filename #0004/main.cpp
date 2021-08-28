#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    long int P, N;

    ifstream inFile;
    ofstream outFile;

    inFile.open("input.txt");
    outFile.open("output.txt");

    while (inFile >> N >> P)
    {
        outFile << N * P << endl;
    }

    outFile.close();
    inFile.close();

    return 0;
}