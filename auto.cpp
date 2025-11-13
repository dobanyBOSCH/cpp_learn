| Language            | Meaning of `auto`                            | Example              | Notes                           |
| ------------------- | -------------------------------------------- | -------------------- | ------------------------------- |
| **C**               | Storage class specifier (automatic duration) | `auto int x = 5;`    | Redundant; same as `int x = 5;` |
| **C++ (pre-C++11)** | Same as in C                                 | `auto int x = 5;`    | Obsolete meaning                |
| **C++11+**          | Type deduction keyword                       | `auto x = 5; // int` | Modern and widely used          |

defaultban minden auto --> stacken keletkezik
egyebkent ki kell irni a static-ot
Cben glabal scope-ban nem lehet

Would you like me to show how auto works with functions in C++ (like auto func() -> int or auto return type deduction)?



