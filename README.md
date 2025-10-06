# Exception Handling in C++

## Aim  
To implement and understand the concept of **Exception Handling in C++** with practical examples including **Division by Zero** and **Age Validation for Voting Eligibility**.  

## Theory  

- **Exception Handling** in C++ is a mechanism to handle runtime errors gracefully.  
- It uses three main keywords:  
  - **try** – Block of code that may cause an exception.  
  - **throw** – Used to signal an exception.  
  - **catch** – Block of code that handles the exception.  
- Applications demonstrated:  
  - Preventing division by zero error.  
  - Restricting voting based on age.  


## Algorithm  

### Experiment 16 A – Exception: Division by Zero  

1. Start the program.  
2. Accept two numbers `n1` and `n2` from the user.  
3. Inside a `try` block:  
   - If `n2 == 0`, throw exception.  
   - Else, calculate `n1 / n2` and display result.  
4. In `catch`, display message *"Cannot Divide by 0"*.  
5. End the program.  

### Experiment 16 B – Exception: Age Less Than 18  

1. Start the program.  
2. Accept age from user.  
3. Inside a `try` block:  
   - If `age < 18`, throw exception.  
   - Else, print "You are eligible to vote".  
4. In `catch`, display message that user is not eligible.  
5. If eligible, ask for party preference (BJP or Congress).  
6. If valid choice, display thank you message. Otherwise, show invalid input message.  
7. End the program.  

## Conclusion  

- Successfully implemented **exception handling** using `try`, `throw`, and `catch`.  
- Learned how to handle runtime errors like **division by zero**.  
- Understood how exceptions can be used to enforce **conditions (like age validation for voting)**.  
- Exception handling makes programs more **robust and user-friendly**.  
