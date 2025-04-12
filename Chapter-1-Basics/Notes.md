# Chapter 1 - Notes 
##  Things I Learned :
-  **Variables**
	- are the name of a memory location that stores data
	- are **case-sensitive** ( `Age` and `age` are different)
- **Data Types**
  
| Type     | Description         | Memory Used  |
|----------|---------------------|--------------|
| `int`    | Integer numbers      | 2 or 4 bytes |
| `char`   | Single characters    | 1 byte       |
| `float`  | Decimal numbers      | 4 bytes      |
| `double` | Larger decimals      | 8 bytes      |

	 
- **Format Specifiers**

| Data Type | Format Specifier |
|-----------|------------------|
| `int`     | `%d`              |
| `char`    | `%c`              |
| `float`   | `%f`              |

	
- **Constants**
	- **Integer constants** → ( ...  `-2`  , `-1`  , `0`  , `1` , `2` ... ) 
	- **Real constants**    → (...  `-2.0` , `-1.0` , `1.0` , `2.0` , `3.14`  ...)
	- **Character constants** → (...  `'a'` , `'A'` , `'&'` , `'@'` , `'#'` ...)
- **Keywords**
	- Reserved words in C with **special meanings**
	- *Can't be used as variable names*
	- Examples: `int`, `char`, `if`, `return`, `for`, `while`, `void`, `break`
- **Comments**
    - Comments help explain code but don't affect execution
	- Single-line comment: ` use " // ... "`
	- Multi-line comment: `  use " /* .... */ " `
     
- **Output** 
	- use `" printf(" .... ") "` function
	- use " \n " for new line
	- to see numbers/ characters as output use this syntax  
         `" printf(" fs ", variable name) "`
 ```c
printf("Value is: %d\n", number);
```      

- **Input** 
    - use " scanf(" fs " , & variable name) " function
```c
scanf("%d", &number);
```


- **Don’t Forget**
	- Every statement in C must end with a semicolon `;`
    - Variable names can't use **keywords**
    - Use `%c` for characters, not `%ch` 
    - Memory size can vary based on the system/compiler
    - Use `&` before the variable name to store input at its memory location
    - Format specifier should match variable type
