# Experiment 4 - String Membership in Grammar

## Grammar

S → 0A1

A → 0A | 1A | ε

---

## Aim

To write a C program to check whether a given string belongs to the above grammar.

---

## Description

The grammar generates all binary strings that:

- Start with **0**
- End with **1**
- Contain any combination of **0** and **1** between them

The program verifies whether the entered binary string satisfies these conditions.

---

## Algorithm

1. Read the input string.
2. Check that the first character is **0**.
3. Check that the last character is **1**.
4. Verify every character is either **0** or **1**.
5. If all conditions are true, accept the string.
6. Otherwise, reject the string.

---

## Program Features

- User input
- Binary string validation
- Grammar membership checking
- Simple implementation

---

## Sample Input

```
Enter binary string: 010101
```

### Output

```
String belongs to the grammar.
```

---

## Sample Input

```
Enter binary string: 1110
```

### Output

```
String does not belong to the grammar.
```

---

## Expected Results

| Input | Output |
|--------|--------|
| 01 | Accepted |
| 001 | Accepted |
| 0101 | Accepted |
| 0111111 | Accepted |
| 101 | Rejected |
| 100 | Rejected |

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Compilation

```bash
gcc grammar.c -o grammar
```

## Run

```bash
./grammar
```

---

## Result

The C program successfully checks whether a binary string belongs to the grammar:

S → 0A1

A → 0A | 1A | ε
