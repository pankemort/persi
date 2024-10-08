#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>


using namespace std;

void display_line_number() {
    int line_number;
    cout << "Enter the line number to be displayed:" << endl;
    cin >> line_number;
    
    ifstream file("input1.txt");
    string line;
    int current_line = 0;
    
    while (getline(file, line)) {
        current_line++;
        if (current_line == line_number) {
            cout << line << endl;
            break;
        }
    }
    file.close();
}

void compare_files() {
    ifstream file1("input1.txt");
    ifstream file2("input2.txt");
    string line1, line2;
    bool identical = true;
    
    while (getline(file1, line1) && getline(file2, line2)) {
        if (line1 != line2) {
            identical = false;
            break;
        }
    }
    
    // Check if one file is longer than the other
    if (getline(file1, line1) || getline(file2, line2)) {
        identical = false;
    }
    
    if (identical) {
        cout << "Two file contents are identical" << endl;
    } else {
        cout << "Two file contents are different" << endl;
    }
    
    file1.close();
    file2.close();
}

void find_frequency_of_each_word() {
    ifstream file("input1.txt");
    string line, word;
    map<string, int> frequency;
    
    while (getline(file, line)) {
        transform(line.begin(), line.end(), line.begin(), ::tolower());
        stringstream ss(line);
        while (ss >> word) {
            frequency[word]++;
        }
    }
    
    // Convert map to vector of pairs for sorting
    vector<pair<string, int>> freq_vector(frequency.begin(), frequency.end());
    
    // Sort by word (already in alphabetical order due to map)
    for (const auto& pair : freq_vector) {
        cout << pair.second << " " << pair.first << endl;
    }
    cout << "0" << endl;
    
    file.close();
}

void extract_substring() {
    int position, length;
    cout << "Enter the position:" << endl;
    cin >> position;
    cout << "Enter the substring length to be extracted:" << endl;
    cin >> length;
    
    ifstream file("input1.txt");
    string line;
    
    while (getline(file, line)) {
        if (position < line.length()) {
            cout << line.substr(position - 1, length) << endl;
        }
    }
    
    file.close();
}

int main() {
    int choice;
    cout << "1. Display the specific line in the file" << endl;
    cout << "2. Compare 2 files" << endl;
    cout << "3. Find the frequency of each word in the file" << endl;
    cout << "4. Extract substring from specific position and length" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your Choice(1-5):" << endl;
    cin >> choice;
    
    switch(choice) {
        case 1:
            display_line_number();
            break;
        case 2:
            compare_files();
            break;
        case 3:
            find_frequency_of_each_word();
            break;
        case 4:
            extract_substring();
            break;
        case 5:
            cout << "Exiting" << endl;
            break;
    }
    
    return 0;
}