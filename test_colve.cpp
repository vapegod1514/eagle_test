#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_set>

void common_words(std::vector<std::string>& first_archive, std::vector<std::string>& second_archive) {
    std::unordered_set<std::string> set_of_words;
    for (auto word: first_archive) {
        set_of_words.insert(word);
    }
    std::cout << "Identical:\n";
    for (size_t i = 0; i != second_archive.size(); ++i) {
        std::string word = second_archive[i];
        auto search = set_of_words.find(word);
        if (search != set_of_words.end()) {
            second_archive[i] = "";
            set_of_words.erase(search);
        }
    }
    std::cout<<"Unique in first archive:\n";
    for (auto x: set_of_words) {
        std::cout << x << "\n";
    }
    std::cout<<"Unique in second archive:\n";
    for (auto x: second_archive) {
        if (x != "") {
            std::cout << x << "\n";
        }
    }
}


