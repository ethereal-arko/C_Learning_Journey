# Chapter 2 - Notes
## Things I Learned

### Instructions
- Sequence statements used in the program
- 3 Types:
  - **Type Declaration Instructions**
  - **Arithmetic Instructions**
  - **Control Instructions**

---

### Type Declaration Instructions
- Statements that tell about the type of a variable   
	→    **Important Note:** C executes code line-by-line, so it's essential to declare a variable before using it. For example :

c
int money = 500;
int newmoney = money + 200;

*→ It is valid ✅*  


c
int money = 500;
int newmoney = money + advance;
int advance = 200;

*→ It is Invalid ❌* 

c
int a, b, c;
a = b = c = 4;

*→ It is Valid ✅* 

c
int a = b = c = 4;

*→ It is Invalid ❌* 


---

### Arithmetic Instructions
- Statements that perform a mathematical operation on variables or values
- **Key Concepts:**
	- **Operands** are the values: a, b
	- **Operators** are symbols: +, -, *, etc.
→	**Important Note:** Always store the result in a variable on the left-hand side. For example:

c
int a = 10;
int b = 5;
int c = a + b;

*→ It is valid ✅*  


c
int a = 10;
int b = 5;
int a + b = c;

*→ It is Invalid ❌* 

---

### Type Conversion

If we mix types in expressions, the output type depends on the operand meaning,

| Operand 1 | Operator     | Operand 2 | Output Type |
|-----------|--------------|-----------|-------------|
| integer   | + / * / -   | integer   | integer     |
| integer   | + / * / -      | float     | float       |
| float     | + / * / -      | float     | float       |

For example:

c
printf("%d", 2/3);     // gives Output: 0
printf("%f", 2.0/3);   // but this gives Output: 0.66666


 → what if we write this code :  

c
int a = 1.99999999;

 **What happens here?** → This leads to a warning or data loss. Because there are two types of conversion

   - **Implicit Conversion** – done automatically by the compiler
   - **Explicit Conversion** – done manually by the user

This conversion flows from larger to smaller types (like float to int) but may lead to data loss in some cases.

---

### Control Instructions 
- Used to control the flow of execution in a program. 
**Types:**

- **Sequence Control Instruction** → Executes instructions in the order they appear.

- **Decision Control Instruction** → Executes blocks conditionally (if, if-else, if-else-if)
- **Loop Control Instruction** → Repeats blocks (for, while, do-while)
- **Case-Control Instruction**  → Switch-case style branching

---

### Operators

Operators help operands to perform operations.

**Types:**
- **Arithmetic Operators**:  +, -, *, /, %
- **Relational Operators**: ==, >, <, >=, <=, !=
- **Logical Operators**: &&, ||, !
- **Assignment Operators**: =, +=, -=, *=, /=, %=
- **Bitwise Operators**: *(to be learned later)*
- **Ternary Operator**: *(to be learned later)*

---

###  Operator Precedence

Let this be a mathematical operation:
c
(a + b - c * d) > (4 + 3) || (4 * 3 * 5)


Which operation is done first? To find the answer we Use this priority chart 

| Priority | Operator        |
|----------|----------------|
| 1        | !            |
| 2        | *, /, %  |
| 3        | +, -       |
| 4        | <, >, <=, >= |
| 5        | ==, !=     |
| 6        | &&           |
| 7        | ||           |
| 8        | =            |

This is known as operator precedence. 
Just by observing we can say Higher priority is given to arithmetic, then relational, then logical operators.
so in general,  **arithmatic > relational > logical > assignment.**