# Question 2 (20 Points. Easy)

    Given a vector of integers v, and a number sum, return a vector of two items which are the indices of the two numbers in v such that they add up to sum. - If there is no answer, the return vector should be empty.

    - If there are multiple answers, return any of them.

## Example 1:

    Input v = [3, 7, 11, 15], sum = 10 
    output: [0, 1], sum=10 (because v[0] + v[1] = 10)

## Example 2:

    Input v = [3, 7, 11, 15], sum = 180, 
    output: []

## Example 3:

    Input v = [1, 4, 3, 2], sum = 5, 
    output: either [0, 1] OR [2, 3] is the correct answer.

### 👉Hint: Create a map that maps each number in v to its index.