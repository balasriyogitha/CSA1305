# Experiment 3 - ε-Closure of an NFA

## Aim
To write a C program to find the ε-closure for all the states in a Non-Deterministic Finite Automata (NFA) with ε-moves.

---

## Description
This program computes the ε-closure of every state in an NFA. The ε-closure of a state is the set of all states that can be reached from that state using only ε-transitions.

---

## Algorithm
1. Read the number of states.
2. Read the ε-transition matrix.
3. For each state:
   - Mark all states as unvisited.
   - Perform DFS using ε-transitions.
   - Print all reachable states.
4. Repeat until ε-closure for every state is obtained.

---

## Program Features
- User input
- Computes ε-closure for every state
- Uses Depth First Search (DFS)
- Simple and beginner-friendly

---

## Sample Input

```
Enter number of states: 3

Enter epsilon transition matrix:
0 1 0
0 0 1
0 0 0
```

### Output

```
Epsilon Closures:
ε-closure(q0) = { q0 q1 q2 }
ε-closure(q1) = { q1 q2 }
ε-closure(q2) = { q2 }
```

---

## Time Complexity

O(n²)

## Space Complexity

O(n)

---

## Compilation

```bash
gcc epsilon_closure.c -o epsilon_closure
```

## Run

```bash
./epsilon_closure
```

---

## Result

The C program successfully computes the ε-closure for every state in the given NFA.
