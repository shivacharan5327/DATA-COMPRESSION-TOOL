# DATA-COMPRESSION-TOOL

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: SURVI.SHIVA CHARAN

*INTERN ID*: CT04DM865

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH KUMAR

I used Chatgpt as well as Youtube for understanding the concept, I used the  AI tool like Chatgpt  for some of the operations,I done this whole program visual studio code editor.This program is applicable for Image Coding,Video Compression.Document Scannig and Faxing,Game Development.The given C program implements a basic data compression algorithm known as Run-Length Encoding (RLE). This is one of the simplest and most commonly used forms of data compression. It is especially effective when the input data contains many repeating characters or patterns. The main idea behind RLE is to reduce the size of data by replacing sequences of the same character with a single character followed by the number of times it occurs consecutively. This approach can significantly reduce the storage space for such repetitive data and is often used in applications such as image compression (especially monochrome bitmaps), text compression, and data transmission.The program begins with the inclusion of the necessary header files: <stdio.h> for input-output operations and <string.h> for string handling functions. The core of the program lies in the runLengthEncode function, which accepts a character array as input. It first calculates the length of the input string using strlen() function. It then iterates through each character of the string using a for loop. For each character, it checks how many times that character repeats consecutively. This is done using a nested while loop that compares the current character with the next one. If the characters match, the count variable is incremented, and the loop advances to the next character.Once the program detects the end of a repeating sequence, it prints the character followed by the number of times it repeated. For example, if the input is aaabb, the output would be a3b2. This operation continues until the entire input string is processed. The main function acts as the starting point of the program. It defines a character array called input with a capacity of 1000 characters, allowing the user to input a sufficiently long string. The program prompts the user to enter the string to be compressed. The scanf function reads this input, and the runLengthEncode function is called to perform the compression.The result of the compression is then printed on the screen in the form of the encoded string. One of the notable aspects of this program is its simplicity and efficiency for short and repetitive strings. However, it is also important to understand its limitations. If the input string contains very few repeated characters, RLE might not be effective, and the output could end up being longer than the original string (e.g., abcd becomes a1b1c1d1).

*OUTPUT



![ Image 2025-06-02 at 20 48 13_daed40ea](https://github.com/user-attachments/assets/5b5a88aa-cfda-4e19-8a1a-fa81dc0705f0)
