#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

// problem to solve:
// function that takes a string phrase and returns a dictionary based on length
// input: "cute cats chase funny rats"
// output: {
//     4: {"cute", "cats", "rats"},
//     5: {"chase", "funny"}
// }
// input: “I love to smile
// output: {
// 	1: {I},
// 	2: {to},
// 	4: {love},
// 	5: {smile}
// }

int main () {

    string phrase = "test cute cats chase funny rats";
    map<int, string> dict;
    string words;

    // 1.split string into words
    // 2.then go through each word
    // 3.check each lengh
    // 4.create an empty dictionary
    // 5.for each number in key (ordered)
    // 6.add corresponding word with the same size number as the key number ??

    vector<string> wordsList;
    string word;

    for (char c : phrase) {
            if (c != ' ') {
                word += c;
            } else {
                if (!word.empty()) {
                    wordsList.push_back(word);
                    word.clear();
                }
            }
        }

    if (!word.empty()) {
        wordsList.push_back(word);
    }

    map<int, string> outputDict;
    int wordSize;

    // get size of a word
    for (int i = 0; i < wordsList.size(); ++i) {
        wordSize = wordsList.at(i).size();
        if (wordSize == 0)
        cout << wordSize << ":" << wordsList.at(i) << endl;

        // cout << wordsList.at(i) << " ";
        // cout << "length of this word is: " << wordsList.at(i).size() << " "; 
        // wordSize = wordsList.at(i).size();
        // outputDict[wordSize] = wordsList.at(i); 
        // cout << outputDict[wordsList.at(i).size()] << ": " << wordsList.at(i) << endl;
    }
    
    return 0;
}