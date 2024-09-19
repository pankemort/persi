#!/bin/bash

# Function to uppercase the first letter of each word
uppercase_first_letter() {
    echo "Uppercasing the first letter of each word:"
    awk '{for(i=1;i<=NF;i++) $i=toupper(substr($i,1,1)) substr($i,2)}1' input.txt
}

# Function to count the number of lines in the file
count_lines() {
    local lines=$(wc -l < input.txt)
    echo "Number of lines in the file: $lines"
}

# Function to count the number of characters in the file
count_characters() {
    local characters=$(wc -m < input.txt)
    echo "Number of characters in the file: $characters"
}

# Function to count the number of vowels in the file
count_vowels() {
    local vowels=$(grep -o -i '[aeiou]' input.txt | wc -l)
    echo "Number of vowels in the file: $vowels"
}

# Function to count the number of special characters in the file
count_special_characters() {
    local special_chars=$(grep -o '[@$!,.]' input.txt | wc -l)
    echo "Number of special characters (@, $, !, ,, .): $special_chars"
}

# Function to find the length of the longest word in the file
longest_word_length() {
    local longest=$(awk '{for(i=1;i<=NF;i++) { if (length($i) > max) { max=length($i) } }} END { print max }' input.txt)
    echo "Length of the longest word: $longest"
}

# Function to find the length of the shortest word in the file
shortest_word_length() {
    local shortest=$(awk '{for(i=1;i<=NF;i++) { if (length($i) < min || min == 0) { min=length($i) } }} END { print min }' input.txt)
    echo "Length of the shortest word: $shortest"
}

# Menu for operations
while true; do
    echo "1. Uppercasing first letter of each word"
    echo "2. Count the number of lines in the file"
    echo "3. Count the number of characters in the file"
    echo "4. Count the number of vowels in the file"
    echo "5. Count the number of special characters (@, $, !, ,, .)"
    echo "6. Length of the longest word"
    echo "7. Length of the shortest word"
    echo "8. Exit"
    read -p "Enter your choice (1-8): " choice

    case $choice in
        1) uppercase_first_letter ;;
        2) count_lines ;;
        3) count_characters ;;
        4) count_vowels ;;
        5) count_special_characters ;;
        6) longest_word_length ;;
        7) shortest_word_length ;;
        8) exit 0 ;;
        *) echo "Invalid choice, please try again" ;;
    esac
    echo ""
done
