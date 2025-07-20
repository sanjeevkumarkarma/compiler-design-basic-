# compiler-design-basic-COMPANY: CODTECH IT SOLUTIONS PVT.LTD
*NAME: sanjeev kumar karma
INTERN ID:CT04DG3178
DOMAIN: C++ LANGUAGE
DURATION: 4 WEEKS
MENTOR: NEELA SANTOSH KUMAR
PARAGRAPH :
This C++ program is a simple calculator that evaluates arithmetic expressions entered by the user. It allows you to enter a basic math expression using numbers and the four common operators: addition (+), subtraction (-), multiplication (*), and division (/). The program follows the correct order of operations, meaning that it will solve multiplication and division before addition and subtraction. For example, if you enter the expression 6 + 4 * 2 - 6 / 3, it will correctly calculate it by first doing the multiplication and division, then the addition and subtraction, and finally show the result.

The program starts by asking the user to input an expression. It uses a special tool in C++ called stringstream to break the input into separate parts—numbers and operators. It stores all the numbers in one list (called a vector in C++) and all the operators in another list. The first number is read and added to the list of numbers. Then, in a loop, it reads one operator and the next number, and adds them to the operator and number lists respectively.

Once all the input is stored in the two vectors, the program moves on to solving the expression. First, it goes through the list of operators and looks for multiplication (*) and division (/). These are higher-priority operations, so they are done before anything else. When one of these operators is found, it performs the calculation using the current and next number in the list, replaces the result in the current position, and removes the used number and operator. This step is repeated until all multiplication and division operations are complete.

Next, the program solves the remaining expression with only addition and subtraction left. It starts with the first number and applies each operator in order with the following numbers. In this way, it gets the final answer step by step. Finally, it prints the result on the screen.

The function named calculate is used throughout the program to perform the arithmetic operations. It takes two numbers and an operator, and based on the operator, it returns the result of multiplying, dividing, adding, or subtracting the two numbers. If there is an error like division by zero, it safely returns zero.

This program is simple and easy to understand. It shows how to work with strings, vectors, loops, and functions in C++. It is a good starting point for beginners who want to learn how to build a basic calculator or understand how expressions are evaluated in programming. However, it has some limitations. The input must have spaces between each number and operator, like 6 + 4 * 2, otherwise it won't work. It does not support parentheses, decimal numbers, or negative numbers. Still, this code helps in learning basic programming concepts and how to break down a problem step by step. You can improve it further by adding support for decimals, error handling, and more complex expressions in the future.
