
---

## 📝 **Day 2 - C++ Short Notes**

---

### ✅ **1. Structure of a Basic C++ Program**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}
```

---

### 🧱 **Breakdown of Each Part**

| Line                     | Meaning                                                  |
| ------------------------ | -------------------------------------------------------- |
| `#include <iostream>`    | Includes tools to print (`cout`) or read (`cin`)         |
| `using namespace std;`   | Lets us use shortcuts like `cout` instead of `std::cout` |
| `int main()`             | Starting point of every C++ program                      |
| `{ ... }`                | Braces that hold the main code block                     |
| `cout << "..." << endl;` | Prints text to the screen and goes to the next line      |
| `return 0;`              | Ends the program with success (0 = no error)             |

---

### 📁 **What is a Namespace?**

* A **namespace** is like a folder that holds related code.
* `std` is the **Standard namespace**.
* It contains things like:

  * `cout` – for output
  * `cin` – for input
  * `string` – for text
  * `endl` – for new line

---

### ✅ **Using `namespace std;`**

```cpp
using namespace std;
cout << "Hello";
```

✔️ Good for beginners and small programs
✔️ Less typing

---

### ❌ **Without `namespace std;`**

```cpp
std::cout << "Hello";
```

✔️ Better for big projects
✔️ Avoids name clashes
❌ More typing

---

### 🧠 Under the Hood:

* The compiler looks for things like `cout` **inside the `std` namespace**.
* If you don’t write `using namespace std;`, you **must use `std::` every time.**

---

### ⚠️ Important:

* You **can choose either style**, just be **consistent** in your program.
* In real-world projects, `std::cout` is preferred.

---

### ✅ **Quick Visual Summary**

| You Write       | Compiler Sees        |
| --------------- | -------------------- |
| `cout << "Hi";` | `std::cout << "Hi";` |
| `cin >> age;`   | `std::cin >> age;`   |
| `string name;`  | `std::string name;`  |
| `endl`          | `std::endl`          |

---

