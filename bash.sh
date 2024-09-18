#!/bin/bash

# Function to check if a number is prime
is_prime() {
    local num=$1
    if ((num <= 1)); then
        echo "$num is not a prime number"
        return
    fi
    for ((i = 2; i * i <= num; i++)); do
        if ((num % i == 0)); then
            echo "$num is not a prime number"
            return
        fi
    done
    echo "$num is a prime number"
}

# Function to calculate the sum of digits of a number
sum_of_digits() {
    local num=$1
    local sum=0
    while ((num > 0)); do
        sum=$((sum + num % 10))
        num=$((num / 10))
    done
    echo "Sum of digits is $sum"
}

# Display menu and handle user choice
echo "1. Check if a number is prime"
echo "2. Sum of digits"
echo "3. Exit"
echo -n "Enter your Choice(1-3): "
read choice

case $choice in
    1)
        echo -n "Enter the number: "
        read num
        is_prime $num
        ;;
    2)
        echo -n "Enter the number: "
        read num
        sum_of_digits $num
        ;;
    3)
        echo "Exiting"
        ;;
    *)
        echo "Invalid choice. Please enter a number between 1 and 3."
        ;;
esac