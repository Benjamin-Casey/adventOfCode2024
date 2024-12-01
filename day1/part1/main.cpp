#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

std::string lineText;
int n1, n2;

std::vector<int> v1, v2;
int difference = 0;

int main()
{
    std::ifstream inputFile("input.txt");

    // Construct arrays
    while (getline(inputFile, lineText))
    {
        std::istringstream iss(lineText);
        iss >> n1 >> n2;

        v1.push_back(n1);
        v2.push_back(n2);
    }

    // Sort vectors
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());

    // Iterate over vector, calculating difference
    for (int i = 0; i != v1.size(); i++)
        difference += std::abs(v1[i] - v2[i]);

    std::cout << "Difference: " << difference << std::endl;

    inputFile.close();
    return 0;
}