#!/bin/bash

# Function to find the length of the shortest line in the file
find_shortest_line_length() {
  local shortest_length=$(awk 'NR == 1 || length < min_length { min_length = length } END { print min_length }' input.txt)
  echo "The length of the shortest line is: $shortest_length"
}

# Function to copy specific lines from input.txt to output.txt
copy_specific_lines() {
  echo "Enter the starting line number:"
  read start_line
  echo "Enter the ending line number:"
  read end_line
  sed -n "${start_line},${end_line}p" input.txt > output.txt
  echo "Copied lines $start_line to $end_line from input.txt to output.txt."
  echo "Contents of output.txt:"
  cat output.txt
}

# Function to find the word with a specific frequency in input.txt
find_specific_frequency_word() {
  echo "Enter the frequency you want to search for:"
  read frequency
  echo "Finding words with frequency $frequency in input.txt:"
  tr -s '[:space:]' '\n' < input.txt | grep -v '^\s*$' | sort | uniq -c | awk -v freq="$frequency" '$1 == freq { print $2 }'
}

# Function to replace a string in input.txt
replace_string() {
  echo "Enter the string to search for:"
  read search_string
  echo "Enter the replacement string:"
  read replacement_string
  sed -i "s/$search_string/$replacement_string/g" input.txt
  echo "Replaced '$search_string' with '$replacement_string' in input.txt."
  echo "Contents of input.txt:"
  cat input.txt
}

# Main menu
while true; do
  echo "1. Find the length of the shortest line in the file (input.txt)"
  echo "2. Copy specific lines from input.txt to output.txt"
  echo "3. Find the word with a specific frequency in input.txt"
  echo "4. Replace a string in input.txt"
  echo "5. Exit"
  echo "Enter your Choice(1-5):"
  read choice

  case $choice in
    1)
      find_shortest_line_length
      ;;
    2)
      copy_specific_lines
      ;;
    3)
      find_specific_frequency_word
      ;;
    4)
      replace_string
      ;;
    5)
      echo "Exiting"
      break
      ;;
    *)
      echo "Invalid choice, please enter a number between 1 and 5."
      ;;
  esac
done
