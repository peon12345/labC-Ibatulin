#include <iostream>
#include <fstream>
#include <string>

void replaceStringInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        return;
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile) {
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::string replacedLine;
        size_t pos = 0;
        while (pos < line.length()) {
            size_t foundPos = line.find(s1, pos);
            if (foundPos != std::string::npos) {
                replacedLine += line.substr(pos, foundPos - pos);
                replacedLine += s2;
                pos = foundPos + s1.length();
            } else {
                replacedLine += line.substr(pos);
                break;
            }
        }
        outputFile << replacedLine << std::endl;
    }

    inputFile.close();
    outputFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceStringInFile(filename, s1, s2);

    return 0;
}