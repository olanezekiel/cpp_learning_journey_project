# C++ Systems & Low-Level Foundations

A structured engineering repository documenting my transition into modern C++ (C++17/C++20), memory mechanics, and low-level software architecture.

The objective of this repository is to build rigorous, bare-metal fluency in systems programming—focusing on deterministic memory layout, the compiler toolchain, manual resource management, and modern language idioms.

---

## 🛠️ Toolchain & Environment

- **Language Standard:** C++17 / C++20
- **Compiler:** Microsoft Visual C++ (MSVC) / Clang
- **Environment:** Visual Studio Code on Windows
- **Primary Resource:** [LearnCpp.com](https://www.learncpp.com/)

---

## 📂 Project Directory

| Directory | Topic / Concept | Key Mechanics Demonstrated |
| :--- | :--- | :--- |
| `hi-lo/` | Control Flow & Modular Structure | Multi-file compilation (`main.cpp`, `guess.cpp`), user input validation, header guards (`header.h`), and random number generation state. |
| `trade_risk_calculator/` | Quantitative Logic & IO Management | Floating-point precision math, string buffer cleaning (`std::ws`), system console commands, and strict multi-file header architecture. |

---

## 🧠 Core Competencies Under Development

- **Compilation Pipeline:** Preprocessor directives, translation units, object linking, and header management.
- **Stream & Buffer Management:** Secure string extraction, whitespace handling, and flushing input buffers to prevent execution skipping.
- **Memory Architecture:** Stack vs. heap allocation, pointer mechanics, references, and lifetime scopes.
- **Modern Idioms:** RAII (Resource Acquisition Is Initialization), value semantics, move semantics, and template foundations.
- **Standard Template Library (STL):** Iterators, associative containers, and low-latency algorithmic patterns.

---

## 📜 Development Standard

All code in this repository adheres to zero-warning compilation, explicit namespace management (avoiding global `using namespace std;`), standard formatting conventions, and strict separation between declarations (`.h`) and implementations (`.cpp`).