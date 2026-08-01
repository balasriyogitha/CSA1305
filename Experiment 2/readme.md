# Experiment 2 – NFA Simulation in C

## Aim
To write a C program to simulate a **Non-Deterministic Finite Automaton (NFA)** for the language representing strings that **start with '0' and end with '1'**.

---

## Description
This program simulates a simple Non-Deterministic Finite Automaton (NFA). It checks whether the given input string starts with **'0'** and ends with **'1'**.

- If both conditions are satisfied, the string is **Accepted**.
- Otherwise, the string is **Rejected**.

---

## Algorithm
1. Start the program.
2. Read the input string.
3. Find the length of the string.
4. Check whether the first character is **'0'**.
5. Check whether the last character is **'1'**.
6. If both conditions are true, display **"String Accepted"**.
7. Otherwise, display **"String Rejected"**.
8. Stop the program.

---

## Program Features
- User-friendly input
- Simple NFA simulation
- Accepts binary strings
- Easy to understand for beginners

---

## Sample Input 1

```
Enter the input string: 01101
```

### Output

```
Result: String Accepted.
```

---

## Sample Input 2

```
Enter the input string: 11010
```

### Output

```
Result: String Rejected.
```

---

## Expected Results

| Input | Output |
|--------|--------|
| 01 | Accepted |
| 011 | Accepted |
| 0101 | Accepted |
| 111 | Rejected |
| 100 | Rejected |
| 1010 | Rejected |

---

## Time Complexity
**O(n)**

## Space Complexity
**O(1)**

---

## Compilation

```bash
gcc nfa.c -o nfa
```

## Execution

```bash
./nfa
```

---

## Result
The C program successfully simulates a Non-Deterministic Finite Automaton (NFA) that accepts strings starting with **0** and ending with **1**.
