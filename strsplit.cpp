#include <iostream>
#include <string>
#include <vector>

/* Split string using delimiter into a given number of tokens */
std::vector<std::string> split(std::string input, const std::string &delimiter, int max_tokens) {
    std::vector<std::string> tokens;

    // Tokenize until token limit is reached or EOS (end of string)
    while((max_tokens != 0 && max_tokens != 1) && input.find(delimiter) != input.npos) {
        tokens.push_back(input.substr(0, input.find(delimiter)));
        input = input.substr(input.find(delimiter) + delimiter.length());

        // Only keep track of max_tokens if it's positive
        if(max_tokens > 1) {
            max_tokens--;
        }
    }
    // Append final token separately
    if(max_tokens != 0) {
        tokens.push_back(input);
    }
    
    return tokens;
}

/* Split string with no maximum token limit */
std::vector<std::string> split(const std::string &input, const std::string &delimiter) {
    return split(input, delimiter, -1);
}

/*
 * Splits an input string according to user input
 */
int main() {
    std::string input, delimiter;
    int max_tokens;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Enter a delimiter: ";
    std::getline(std::cin, delimiter);

    std::cout << "Enter the maximum amount of tokens: ";
    std::cin >> max_tokens;

    std::cout << "Split string:" << std::endl;

    // Print each token on a separate line
    for(const std::string &token : split(input, delimiter, max_tokens)) {
        std::cout << token << std::endl;
    }

    return 0;
}