# Data Structures and Algorithms Practice Repository

A starter repository for practicing Data Structures and Algorithms problems in **C++** and **Python**. This repository provides a structured approach to organizing your LeetCode solutions and algorithm practice.

## 📁 Repository Structure

```
├── cpp/                          # C++ Solutions
│   ├── arrays/                   # Array-based problems
│   ├── linked_lists/             # Linked List problems
│   ├── trees/                    # Tree-based problems
│   ├── graphs/                   # Graph problems
│   ├── dynamic_programming/      # DP problems
│   ├── sorting/                  # Sorting algorithms
│   ├── searching/                # Searching algorithms
│   └── templates/                # C++ code templates
├── python/                       # Python Solutions
│   ├── arrays/                   # Array-based problems
│   ├── linked_lists/             # Linked List problems
│   ├── trees/                    # Tree-based problems
│   ├── graphs/                   # Graph problems
│   ├── dynamic_programming/      # DP problems
│   ├── sorting/                  # Sorting algorithms
│   ├── searching/                # Searching algorithms
│   └── templates/                # Python code templates
├── Makefile                      # Build configuration for C++
├── README.md                     # This file
├── LICENSE                       # MIT License
└── .gitignore                    # Git ignore rules
```

## 🚀 Getting Started

### Prerequisites

**For C++:**
- GCC compiler (g++) with C++17 support
- Make (for using the provided Makefile)

**For Python:**
- Python 3.6 or higher

### Installation

1. Clone this repository:
```bash
git clone https://github.com/froxily/Lc-solutions-.git
cd Lc-solutions-
```

2. Test the setup:

**C++:**
```bash
make run FILE=cpp/arrays/two_sum.cpp
```

**Python:**
```bash
python3 python/arrays/two_sum.py
```

## 📝 How to Use

### Starting a New Problem

1. **Choose your language** (C++ or Python)
2. **Select the appropriate category** (arrays, trees, graphs, etc.)
3. **Copy the template file** to your new problem file
4. **Fill in the problem details** and implement your solution

### Using Templates

**For C++:**
```bash
cp cpp/templates/template.cpp cpp/arrays/your_problem.cpp
```

**For Python:**
```bash
cp python/templates/template.py python/arrays/your_problem.py
```

### Compiling and Running C++ Solutions

Use the provided Makefile for easy compilation:

```bash
# Compile only
make compile FILE=cpp/arrays/your_problem.cpp

# Compile and run
make run FILE=cpp/arrays/your_problem.cpp

# Clean compiled files
make clean
```

### Running Python Solutions

Simply execute with Python:

```bash
python3 python/arrays/your_problem.py
```

## 💡 Example Problems

### Two Sum Problem

Both C++ and Python implementations of the classic "Two Sum" problem are included as examples:

- **C++:** `cpp/arrays/two_sum.cpp`
- **Python:** `python/arrays/two_sum.py`

These demonstrate the proper structure and format for your solutions.

## 📚 Problem Categories

### Arrays
Problems involving array manipulation, searching, and algorithms.

### Linked Lists
Singly linked lists, doubly linked lists, and related algorithms.

### Trees
Binary trees, BSTs, tree traversals, and tree-based algorithms.

### Graphs
Graph representation, traversals (BFS/DFS), shortest paths, etc.

### Dynamic Programming
Optimization problems using dynamic programming techniques.

### Sorting
Various sorting algorithms and their implementations.

### Searching
Binary search, linear search, and searching algorithms.

## 🎯 Best Practices

1. **Use descriptive file names** based on the problem title
2. **Include problem links and descriptions** in your solution files
3. **Add test cases** to verify your solutions
4. **Comment your code** to explain the approach and time/space complexity
5. **Follow consistent naming conventions**

### File Naming Convention
- Use lowercase with underscores: `two_sum.cpp`, `binary_tree_inorder.py`
- Be descriptive: `reverse_linked_list.cpp` instead of `problem1.cpp`

## 🔧 Makefile Commands

| Command | Description | Example |
|---------|-------------|---------|
| `make help` | Show available commands | `make help` |
| `make compile FILE=<path>` | Compile a C++ file | `make compile FILE=cpp/arrays/two_sum.cpp` |
| `make run FILE=<path>` | Compile and run a C++ file | `make run FILE=cpp/arrays/two_sum.cpp` |
| `make clean` | Remove compiled executables | `make clean` |

## 🤝 Contributing

Feel free to:
- Add more template variations
- Improve the build system
- Add utility functions or helper classes
- Suggest better organization structures

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🎓 Happy Coding!

Remember: Consistent practice is key to mastering Data Structures and Algorithms. Use this repository to track your progress and build a comprehensive collection of solutions.

---

*Last updated: 2025*
