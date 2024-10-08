Write a program to perform below operations using functions.
i. Display the specific line in the file (input1.txt)
ii. Compare 2 files (input1.txt and input2.txt)
iii. Find the frequency of each word in the file (input1.txt). Display the values in ascending order of words.
iv. Extract substring from specific position and length (input1.txt)

Note: The file name should be ‘input1.txt’ and ‘input2.txt’
You can add the input.txt file inside the FILES folder which is present above the editor.
Do not modify the template code.
Do not use any switch case or loops to reiterate the choices. If used loops to reiterate the choices then the code will take long time to validate and submit.

 In your template code, you can see multi-line comment :' '. All the functionalities in the code template will be inside this multi-line comment only. While working 
on one functionality, please move that function outside of that multi-line comment and then execute. Likewise do for next functionalities. Else your code will throw an error. Keep only the working functionalities outside the multi-line comment.


Function Specifications:
display_line_number() – This function gets the line number and displays that specific line content present in the file input1.txt
compare_files() – This function compares the content of 2 files, input1.txt and input2.txt. If two file contents are completely equal, then display “Two file contents are identical”, else display “Two file contents are different”.
find_frequency_of_each_word() – This function displays the frequency of each word present in the file input1.txt. Display the count and word as mentioned in the sample input and output3.
extract_substring() – This function will extract the substring from each line of the file(input1.txt). The substring position and the length will be passed to this function.

Input Format: 

Give the input as a file.

Output Format:

Display the output in the console.
[All text in bold corresponds to input and the rest corresponds to output.]

Input File: (input1.txt)
Hello World
Welcome you all
All the best
How are you
Good lucktoU

Input File: (input2.txt)
Hello World
Welcome you all
All the best
How you
Good lucktoU

Sample Input and Output1:
1. Display the specific line in the file
2. Compare 2 files
3. Find the frequency of each word in the file
4. Extract substring from specific position and length
5. Exit
Enter your Choice(1-5):
1
Enter the line number to be displayed:
2
Welcome you all

Sample Input and Output2: [Comparing 2 files input1.txt and input2.txt]
1. Display the specific line in the file
2. Compare 2 files
3. Find the frequency of each word in the file
4. Extract substring from specific position and length
5. Exit
Enter your Choice(1-5):
2
Two file contents are different

Sample Input and Output3:
1. Display the specific line in the file
2. Compare 2 files
3. Find the frequency of each word in the file
4. Extract substring from specific position and length
5. Exit
Enter your Choice(1-5):
3
2 all
1 are
1 best
1 good
1 hello
1 how
1 lucktou
1 the
1 welcome
1 world
2 you
0

Sample Input and Output4:
1. Display the specific line in the file
2. Compare 2 files
3. Find the frequency of each word in the file
4. Extract substring from specific position and length
5. Exit
Enter your Choice(1-5):
4
Enter the position:
3
Enter the substring length to be extracted:
5
lo Wo
come
the
 are
d luc

Sample Input and Output5:
1. Display the specific line in the file
2. Compare 2 files
3. Find the frequency of each word in the file
4. Extract substring from specific position and length
5. Exit
Enter your Choice(1-5):
5
Exiting
