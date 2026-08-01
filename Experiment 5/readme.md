# Experiment 5 - String Membership in Grammar

## Grammar

S → 0S0 | 1S1 | 0 | 1 | ε

---

## Aim

To write a C program to check whether a given string belongs to the grammar:

S → 0S0 | 1S1 | 0 | 1 | ε

---

## Description

The grammar generates all binary palindromes, including the empty string. The program checks whether the entered binary string is a palindrome.

---

## Algorithm

1. Read the binary string.
2. Compare the first and last characters.
3. Continue comparing characters from both ends.
4. If all corresponding characters are equal, accept the string.
5. Otherwise, reject the string.

---

## Program Features

- User input
- Checks binary palindrome
- Simple implementation
- Beginner-friendly

---

## Sample Input

Enter binary string: 1001

### Output

String belongs to the grammar.

---

## Sample Input

Enter binary string: 1010

### Output

String does not belong to the grammar.

---

## Expected Results

| Input | Output |
|-------|--------|
| 0 | Accepted |
| 1 | Accepted |
| 1001 | Accepted |
| 0110 | Accepted |
| 1010 | Rejected |
| 1100 | Rejected |

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Compilation

gcc palindrome.c -o palindrome

## Run

./palindrome

---

## Result

The C program successfully checks whether a binary string belongs to the grammar S → 0S0 | 1S1 | 0 | 1 | ε.
