
---

## 📝 **Day 3 – Variables & Data Types**

---

### 🔹 **1. What is a Variable?**

A **variable** is like a **named box** that stores a value in memory.

📦 Example:

```cpp
int age = 17;
```

* `int` → data type (what kind of value)
* `age` → variable name (label of the box)
* `17` → value stored

---

### 🔹 **2. Basic Data Types in C++**

| Data Type | Use                        | Example                   |
| --------- | -------------------------- | ------------------------- |
| `int`     | Whole numbers              | `int age = 17;`           |
| `float`   | Decimal numbers (6 digits) | `float pi = 3.14;`        |
| `double`  | More precise decimals      | `double weight = 65.987;` |
| `char`    | Single character (use `'`) | `char grade = 'A';`       |
| `bool`    | True or false              | `bool isPass = true;`     |

🧠 Note:

* `true` = `1`
* `false` = `0`

---

### 🔹 **3. Declaring Variables**

```cpp
<data_type> <variable_name> = <value>;
```

✅ Examples:

```cpp
int age = 17;
float marks = 88.5;
char letter = 'M';
bool isHappy = true;
```

---

### 🔹 **4. Printing Variables**

```cpp
cout << "Age: " << age << endl;
```

🖨️ Combines text and variable value on screen.

---

### 🔹 **5. Variable Naming Rules**

✅ Valid names:

* Start with letter or `_`
* Can include letters, numbers, `_`
* Case-sensitive: `Age` ≠ `age`

❌ Invalid names:

* `1name` → starts with number
* `my name` → space not allowed
* `int` → can't use reserved words

---

### 🔹 **6. Memory Size (FYI)**

| Type     | Typical Size |
| -------- | ------------ |
| `int`    | 4 bytes      |
| `float`  | 4 bytes      |
| `double` | 8 bytes      |
| `char`   | 1 byte       |
| `bool`   | 1 byte       |

---

### ✅ Summary Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 17;
    float marks = 92.5;
    char grade = 'A';
    bool passed = true;

    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << passed << endl;

    return 0;
}
```

---

