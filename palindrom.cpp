#include <iostream>

bool isPalindrome(const std::string & text) {

    auto x = std::mismatch(text.begin(), text.end(), text.rbegin());
    return (x.first == text.end());
}

int main() {

    std::string text = "kajak";
    auto is_pal = isPalindrome(text);

    std::cout << is_pal << std::endl;
}