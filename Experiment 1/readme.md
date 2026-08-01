# Experiment 1 – DFA Simulation in C

## Aim
To write a C program to simulate a **Deterministic Finite Automaton (DFA)** that accepts strings which **start with 'a' and end with 'a'**.

---

## Description
This program simulates a simple Deterministic Finite Automaton (DFA). It checks whether the given input string begins with the character **'a'** and ends with the character **'a'**.

- If both conditions are satisfied, the string is **Accepted**.
- Otherwise, the string is **Rejected**.

---

## Algorithm
1. Start the program.
2. Read the input string from the user.
3. Find the length of the string.
4. Check whether the first character is `'a'`.
5. Check whether the last character is `'a'`.
6. If both conditions are true, display **"String Accepted"**.
7. Otherwise, display **"String Rejected"**.
8. Stop the program.

---

## C Program

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    if(len > 0 && str[0] == 'a' && str[len - 1] == 'a')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
```

---

## Sample Input 1

```
Enter a string: abca
```

### Output

```
String Accepted
```

---

## Sample Input 2

```
Enter a string: baab
```

### Output

```
String Rejected
```

---

## Expected Results

| Input | Output |
|--------|--------|
| aa | Accepted |
| aba | Accepted |
| abca | Accepted |
| baa | Rejected |
| abb | Rejected |
| bbbb | Rejected |

---

## Time Complexity

- **O(n)** (Finding the string length)

## Space Complexity

- **O(1)**

---

## How to Compile and Run

### Compile

```bash
gcc dfa.c -o dfa
```

### Run

```bash
./dfa
```

---

## Result

The program successfully simulates a Deterministic Finite Automaton (DFA) that accepts strings starting with **'a'** and ending with **'a'**.
