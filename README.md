# HW3
##Question 2 (20 Points. Easy)

    Given a vector of integers v, and a number sum, return a vector of two items which are the indices of the two numbers in v such that they add up to sum. - If there is no answer, the return vector should be empty.

    - If there are multiple answers, return any of them.

##Question 3 (60 Points. Medium)

    Implement the following class for a Linked List of integer values. All functions except for print() require a GTest.

##Question 4 (20 Points. Medium)

    Given an expression string, find if the input has valid brackets (i.e. { } or [ ] or ( ) ). An input expression is valid if:

    ● Open brackets are closed by the same type of brackets.

    ● Open brackets must be closed in the correct order.

    ● An empty string is also considered valid.

    You should only check for the validity of brackets based on the above rules, i.e. ‘(‘, ‘)’, ‘[‘, ‘]’, ‘{‘, ‘}’, not the rest of the expression.

##Question 5 (20 Points. Medium)
    Write a class that stores a student’s academic record. The academic record should hold marks for the following subjects:

    1. Maths.

    2. Computers.

    3. Physics.

###Requirements:
    ● Implement the default constructor that initializes grades to 0.

    ● Implement a constructor that takes the initial grades as three parameters.

    ● Implement the copy constructor.

    ● The class should support “++” and “--” operators (both postfix and prefix) ○ A “++” call should increase all marks of each subject by 10. ○ A “--” call should decrease all marks of each subject by 20.

    ● The class should support “+=” and “-=”, which affect all grades of the object.

    ● The class should support “==” for comparison.

    ● After any operation, marks for any subject should stay within the range of 0 and 100:

    ○ If after any operation, marks for any subject are exceeding 100 then your code should simply set the marks of that particular subject as 100.

    ○ Similarly, if after any operation the mark of any subject below is 0 then your code should just set the marks of that particular subject to 0.

    ● Print(), which returns a string that contains all marks and can later be used to print the marks.
