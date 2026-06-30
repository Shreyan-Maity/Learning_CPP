Here’s a fun visual to help you understand **Variables & Data Types** — think of them as little boxes where we store different kinds of information.  

`https://copilot.microsoft.com/th/id/BCO.5d20eddf-2894-4430-8110-ad1a4226232e.png`

---

## 🌟 Lesson 2: Variables & Data Types

### 🖼️ Imagine This
Variables are like **boxes** with labels:
- One box might say **Age** and hold a number like `12`.  
- Another box might say **Marks** and hold `95.5`.  
- Another box might say **Grade** and hold `'A'`.  
- Another box might say **Name** and hold `"Shreyan"`.  

Each box has a **data type** that decides what kind of thing it can store:
- `int` → whole numbers (like age: 12)  
- `float` → decimal numbers (like marks: 95.5)  
- `char` → single characters (like grade: 'A')  
- `string` → words or sentences (like name: "Shreyan")  

---

### 📖 Example in C++
```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 12;          // integer
    float marks = 95.5;    // decimal
    char grade = 'A';      // single character
    string name = "Shreyan"; // text

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
```

👉 This program stores values in variables and prints them out.

---

## 📝 Practice Problems

Here are **5 problems** (2 easy, 2 medium, 1 hard):

### Easy
1. Store your age in a variable and print it.  
2. Store your marks in a variable and print them.

### Medium
3. Store your name and age, then print:  
   ```
   My name is Shreyan and I am 16 years old.
   ```
4. Store marks in three subjects (Math, Science, English) and print their average.

### Hard
5. Write a program that asks the user for their name, age, and marks. Then print:  
   ```
   Hello Shreyan, you are 16 years old and scored 85 marks.
   ```

---
