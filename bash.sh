#!/bin/bash

# Function to convert all text in input1.txt to uppercase
convert_to_uppercase() {
    tr '[:lower:]' '[:upper:]' < input1.txt > temp.txt && mv temp.txt input1.txt
    echo "All text in input1.txt converted to uppercase."
}

# Function to calculate the number of words in input1.txt
count_words() {
    word_count=$(wc -w < input1.txt)
    echo "Number of words in input1.txt: $word_count"
}

# Function to find and display the longest line in input1.txt
find_longest_line() {
    longest_line=$(awk 'length > max_length { max_length = length; longest = $0 } END { print longest }' input1.txt)
    echo "Longest line in input1.txt: $longest_line"
}

# Function to merge input1.txt and input2.txt line by line
merge_files() {
    paste -d'\n' input1.txt input2.txt > merged.txt
    echo "Files input1.txt and input2.txt merged line by line into merged.txt."
}

# Display menu and handle user choice
echo "1. Convert all text to uppercase in a file"
echo "2. Calculate the number of words in a file"
echo "3. Find the longest line in a file"
echo "4. Merge two files line by line"
echo "5. Exit"
echo -n "Enter your Choice(1-5): "
read choice

case $choice in
    1)
        convert_to_uppercase
        ;;
    2)
        count_words
        ;;
    3)
        find_longest_line
        ;;
    4)
        merge_files
        ;;
    5)
        echo "Exiting..."
        ;;
    *)
        echo "Invalid choice. Please enter a number between 1 and 5."
        ;;
esac