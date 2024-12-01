#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

std::string lineText;
std::map<int, int> m1; // Tracks how many times a number occurs on the left
std::map<int, int> m2; // Tracks how many times a number occurs on the right
int n1, n2;
int difference = 0;

int main()
{
    std::ifstream inputFile("input.txt");

    // Construct arrays
    while (getline(inputFile, lineText))
    {
        std::istringstream iss(lineText);
        iss >> n1 >> n2;

        m1[n1] += 1;
        m2[n2] += 1;
    }

    for (std::map<int, int>::iterator it = m1.begin(); it != m1.end(); it++)
        // Multiply the number by the number of times we saw it, then by the value of the number
        difference += (it->first * it->second) * m2[it->first];

    std::cout << "Difference: " << difference << std::endl;

    inputFile.close();
    return 0;
}