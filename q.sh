
Write a program to perform below operations using functions.
i. Find the length of the shortest line in the file(input.txt)
ii. Copy the specific lines from one file to another file(from:input.txt,to:output.txt)
iii. Find the word which got the specific frequency in the file(input.txt)
iv. Replace a string in the file

Note: The file name should be ‘input.txt’ and ‘output.txt’
You can add the input.txt file inside the FILES folder which is present above the editor.
Do not modify the template code.

  In your template code, you can see multi-line comment :' '. All the functionalities in the code template will be inside this multi-line comment only. While working 
on one functionality, please move that function outside of that multi-line comment and then execute. Likewise do for next functionalities. Else your code will throw an error. Keep only the working functionalities outside the multi-line comment.


Function Specifications:
find_shortest_line_length() – This function displays the length of the shortest line in the file input.txt
copy_specific_lines() – This function copies the specific line contents from file input.txt to output.txt file. And then display the output.txt file contents.
find_specific_frequency_word() – This function returns the words which matches with the given frequency
replace_string() – This function replace the string with new string. And then display the input.txt file contents post replacement.

Input Format: 

Give the input as a file.

Output Format:

Display the output in the console.
[All text in bold corresponds to input and the rest corresponds to output.]

Input File: (input.txt)
This is a test file.
Bash scripting is fun.
Learning to code is rewarding.
Test your skills and improve.
Bash is very powerful and flexible.
The test file contains multiple lines.
Let's find the shortest and longest lines.
Coding is a skill.
Test your code frequently.
Repeat, repeat, and repeat again for mastery.
Skill comes with practice.
Bash scripting makes automation easy.

Sample Input and Output1:
1. Find the length of the shortest line in the file (input.txt)
2. Copy specific lines from input.txt to output.txt
3. Find the word with a specific frequency in input.txt
4. Replace a string in input.txt
5. Exit
Enter your Choice(1-5):
1
The length of the shortest line is: 19


Sample Input and Output2:
1. Find the length of the shortest line in the file (input.txt)
2. Copy specific lines from input.txt to output.txt
3. Find the word with a specific frequency in input.txt
4. Replace a string in input.txt
5. Exit
Enter your Choice(1-5):
2
Enter the starting line number:
2
Enter the ending line number:
4
Copied lines 2 to 4 from input.txt to output.txt.
Contents of output.txt:
Bash scripting is fun.
Learning to code is rewarding.
Test your skills and improve.

Sample Input and Output3:
1. Find the length of the shortest line in the file (input.txt)
2. Copy specific lines from input.txt to output.txt
3. Find the word with a specific frequency in input.txt
4. Replace a string in input.txt
5. Exit
Enter your Choice(1-5):
3
Enter the frequency you want to search for:
3
Finding words with frequency 3 in input.txt:
Bash

Sample Input and Output4:
1. Find the length of the shortest line in the file (input.txt)
2. Copy specific lines from input.txt to output.txt
3. Find the word with a specific frequency in input.txt
4. Replace a string in input.txt
5. Exit
Enter your Choice(1-5):
4
Enter the string to search for:
Bash
Enter the replacement string:
Shell
Replaced 'Bash' with 'Shell' in input.txt.
Contents of input.txt:
This is a test file.
Shell scripting is fun.
Learning to code is rewarding.
Test your skills and improve.
Shell is very powerful and flexible.
The test file contains multiple lines.
Let's find the shortest and longest lines.
Coding is a skill.
Test your code frequently.
Repeat, repeat, and repeat again for mastery.
Skill comes with practice.
Shell scripting makes automation easy.

Sample Input and Output5:
1. Find the length of the shortest line in the file (input.txt)
2. Copy specific lines from input.txt to output.txt
3. Find the word with a specific frequency in input.txt
4. Replace a string in input.txt
5. Exit
Enter your Choice(1-5):
5
Exiting



