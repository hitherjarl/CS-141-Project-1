# Prog1: Magic Square
Write a program in C to play the mind-reader game of a Russian Magic Square. Your interface will be text-driven and will not use graphics. For symbols, you will use letters of the alphabet.

Running your program will look something like what is shown below, where user input is shown in bold:

Program #1: Russian Magic Square
Author: Dale Reed
Lab: Tues 5am
Date: January 11, 2016
System:  DevC++ on Windows 10
 99:y 98:B 97:c 96:m 95:e 94:X 93:X 92:g 91:a 90:y
 89:N 88:s 87:P 86:s 85:u 84:o 83:i 82:X 81:y 80:k
 79:m 78:y 77:T 76:o 75:N 74:Z 73:N 72:y 71:X 70:s
 69:i 68:q 67:a 66:D 65:D 64:F 63:y 62:N 61:J 60:P
 59:P 58:c 57:i 56:Z 55:X 54:y 53:m 52:i 51:N 50:P
 49:e 48:e 47:X 46:D 45:y 44:e 43:a 42:R 41:T 40:H
 39:P 38:F 37:g 36:y 35:F 34:u 33:H 32:m 31:D 30:H
 29:D 28:o 27:y 26:e 25:H 24:o 23:m 22:F 21:X 20:i
 19:L 18:y 17:w 16:N 15:k 14:P 13:B 12:o 11:X 10:J
  9:y  8:c  7:s  6:Z  5:a  4:V  3:L  2:s  1:w  0:y

1. Choose any two-digit number in the table above (e.g. 73).
2. Subtract its two digits from itself (e.g. 73 - 7 - 3 = 63)
3. Find this new number (e.g. 63) and remember the letter next to it.
4. Now press the return key and I'll read your mind...

You selected the character: y

# You need to know the following concepts in order to write this program:
How a Russian Magic Square Works (do some web research...); how to use some integrated development environment such as DevC++, Codeblocks, QtCreator or xcode; simple input and output; using variables; simple if statements; a while loop; generating a random number.

# Notes:
1) The Zyante review material for the first week will give you the components you need to do this program (variables, loops, input/output in C, random numbers)
2) Make sure you read the syllabus regarding the grading criteria. Particularly on the first program, students tend to lose points for not documenting adequately and for not choosing meaningful variable names.
3) Note that you must give both upper and lower case letters in your table. One way to do this is to check your random number. If it is even, generate an upper-case letter. If it is odd, generate a lower-case letter.
4) Remember to include your TA's NAME and your LAB DAY in the documentation header of your programs AS WELL AS in the output that appears on the screen.
5) Do not be deceived. Future programs will be much more complex.

