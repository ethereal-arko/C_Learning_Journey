# Chapter 3 - Notes
## Things I Learned:
- **Conditional Statements**
	- A program that makes decisions about what to run, depending on certain conditions.
	- 2 types of conditional statements:
		- If-else Statements
		- switch Statements
- **If-else Statements**
	- The most basic way to make a decision in C
	- Syntax:

```c
if (condition)
{
    // do something if true
} 
else {
    // do something if false
}
```

→ **Note:** If there is more than 1 condition then the syntax becomes:

```c
if (condition 1)
{
    // do something if condition 1 is true
} 
else if (condition 2)
{
    // do something if condition 1 is false and condition 2 is true
}
...
else {
    // do something if all conditions are false
}
```
- **Conditional Operators**
	- Shorter way to write a simple if-else.
	- Also known as **Ternary Operator**
	- Syntax:

```c
(condition) ? // do something if condition is true : // do something if condition is false;
```
→ **Note:** We can only use one statement on each side. It cannot execute a block of code.
- **Switch Statements**
	- Helps to replace multiple if-else-if statements when we're checking one variable against different fixed values
	- We use it when we don't need to check relational conditions like (`>`, `<`)
	- Syntax:

```c
switch(variable_name)
{
    case value1: 
        // code to run if variable_name == value1
        break; 

    case value2: 
        // code to run if variable_name == value2
        break; 
    
    ...
    
    default:
        // code to run if no case matches
}
```
→ **Note:**
- `variable_name`: It is evaluated once (e.g., `int choice`, `char grade`, etc.)
- `case value:`: Each case is checked and if a match is found, that block runs. The order doesn’t affect the result.
- `break;`: Ends a case. Without it, execution will fall through to the next case meaning it will execute all the code after the matched case.
- `default:`: Executes if no case matches (like an "else").