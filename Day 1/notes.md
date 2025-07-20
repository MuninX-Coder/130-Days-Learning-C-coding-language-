
---

## 📝 **Day 1 - C++ Short Notes**

### ✅ 1. What is an IDE?

* **IDE = Integrated Development Environment**
* It's a tool where we **write**, **run**, and **debug** C++ code.
* Example IDEs:

  * **vs code** (recommended for beginners)
  * **Online Compiler** like [Programiz](https://www.programiz.com/cpp-programming/online-compiler)

---

### ✅ 2. First C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

---

### ✅ 3. Basic Structure of a C++ Program

| Line                   | Meaning (In Simple Words)                              |
| ---------------------- | ------------------------------------------------------ |
| `#include <iostream>`  | Include screen printing tools (`cout`)                 |
| `using namespace std;` | Use standard shortcuts (so we can write `cout` easily) |
| `int main()`           | Starting point of the program                          |
| `{` and `}`            | Open and close the body of the program                 |
| `cout << "text";`      | Print text to the screen                               |
| `return 0;`            | End the program successfully                           |

---

### ✅ 4. How C++ Code Runs (Under the Hood)

1. **Write code** (you type `.cpp` file)
2. **Compiler** translates code → machine language (0s & 1s)
3. **CPU** runs that machine code
4. **Output** shows on screen (via `cout`)

---

### ✅ 5. Your First Program Output:

```cpp
cout << "I am learning C++ with the best teacher!" << endl;
```

**Output:**

```
I am learning C++ with the best teacher!
```

---

💡 **Tip:** `endl` means "end line" (like pressing Enter)

---
