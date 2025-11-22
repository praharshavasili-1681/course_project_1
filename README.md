# <CENTER>  LEAVE MANAGEMENT</CENTER> #


---

***** Abstract *****

The Leave Management System is a console-based application developed in the C programming language to simplify and automate the process of managing employee leave. The system allows administrators to add employee details, maintain leave records, and track available leave balances efficiently. Each employee is assigned a default number of casual, sick, and paid leaves, which can be updated dynamically based on leave usage. The program includes key operations such as adding employees, displaying employee lists, applying for leave, and checking leave balances. It uses menu-driven interaction to make the system user-friendly and easy to navigate. By reducing manual paperwork and human error, the Leave Management System provides a simple, fast, and effective way to handle leave records in small organizations or academic scenarios. This project also demonstrates the use of structures, file handling/arrays, and switch-case logic in C, making it a strong example of basic programming and data management concepts.


Here are well-written, clear, and professional Project Features for your Leave Management System in C.


---

***** FEATURES *****

1. Employee Registration

Allows adding new employees by entering their ID and name.

Automatically initializes default leave balances (Casual, Sick, Paid).





2. Leave Categories

Supports three types of leaves:

Casual Leave (CL)

Sick Leave (SL)

Paid Leave (PL)


Each category is tracked separately.





3. Apply for Leave

Employees can request leave by selecting the leave type and number of days.

System checks availability:

Approves if balance is sufficient

Rejects if leave exceeds available days






4. Leave Balance Management

Keeps track of updated leave balances for every employee.

Automatically deducts leave after approval.




5. Display Employee List

Shows all employees along with:

ID

Name

Casual leave balance

Sick leave balance

Paid leave balance






6. Check Individual Leave Balance

Retrieves and displays the remaining leaves for a single employee based on ID.





7. Menu-Driven Interface

Easy-to-use console menu.

Guides the user with options:

Add Employee

Display Employees

Apply Leave

Check Leave Balance

Exit






8. Error Handling

Handles invalid choices.

Displays messages for:

Employee not found

Insufficient leave balance

Invalid menu input


____


***** Functional Features *****

These are the features that describe what the system does (system behaviour).

1. Employee Registration

Allows the user to add a new employee by entering an ID and name.

Automatically assigns default leave balances (Casual, Sick, Paid).


2. Leave Application System

Employees can request different types of leave.

System verifies leave availability before approving.

Automatically updates the leave balance after approval.


3. Leave Balance Tracking

Maintains updated leave balances for each employee.

Allows checking the remaining leaves at any time.


4. Display Employee Details

Displays all employees along with their leave balances.

Helps users to easily view employee leave status.


5. Search Employee by ID

Enables the system to find employees based on their ID.

Displays message if employee does not exist.


6. Error Handling

Handles wrong menu choices and insufficient leave balance.

Shows proper messages for invalid operations.


7. Menu-Driven Interaction

Provides a simple and user-friendly menu.

Allows users to navigate through all available operations easily.


_____


***** Technical Features *****



**1. Use of Structures**

Employee data is stored using nested structures.

Each employee contains:

ID

Name

Leave structure (Casual, Sick, Paid)



**2. File Handling **

Data is stored in a .dat file using:

fopen()

fread()

fwrite()

fseek()


Ensures permanent storage of employee records.


**3. Modular Programming**

System is divided into functions such as:

addEmployee()

displayEmployees()

applyLeave()

checkBalance()



**4. Array-Based Record Handling**

Uses arrays (in-memory version) or file records for managing data.

Supports up to 50 employees (user-defined limit).


**5. Decision-Making Using Switch Case**

Menu options are handled through switch() statements.

Also used for selecting leave types.


**6. Validation Logic**

Checks if leave balance is enough before approving.

Verifies whether an employee ID exists.


**7. Console-Based Interface**

Program runs completely on a command-line interface.

Provides clear input/output instructions for users.


**8. Efficient Data Access**

Uses loops and condition checks to search and update employee records.

Ensures fast and simple data manipulation.


____


***** HOW TO RUN A CODE *****

If you don’t want to install anything:

Use any of these sites:

OnlineGDB

Programiz C Compiler

Replit (C language)


Steps:

1. Open any online compiler website.


2. Copy your C code.


3. Paste it into the editor.


4. Click Run.


5. Enter input when asked.





# 2. Running a C Program in Windows (Using GCC – CodeBlocks/MinGW)

Method A: Using CodeBlocks (Recommended)

Steps:

1. Install CodeBlocks with GCC compiler.


2. Open CodeBlocks → Create a new project → Choose “Console Application”.


3. Select C language.


4. Paste your code inside main.c.


5. Click Build & Run (F9).


6. Output window will open and show results.





Method B: Using GCC (MinGW) on Command Prompt

1. Install MinGW (GCC compiler).

2. Write your code in any text editor and save as:

leave.c

3. Open Command Prompt (CMD).

4. Go to the folder where the file is saved:

cd Desktop

5. Compile the code:

gcc leave.c -o leave

6. Run the program:

leave




# 3. Running a C Program on Linux (Ubuntu/Kali)

Steps:

1. Open Terminal.


2. Save your code in a file, example:



nano leave.c

Paste code → Save.

3. Compile using GCC:



gcc leave.c -o leave

4. Run the program:



./leave




# 4. Running a C Program in Android (Phone)

Use an app like:

Cxxdroid

C4droid

Termux (with GCC)


Steps (Cxxdroid example):

1. Install Cxxdroid from Play Store.


2. Open the app.


3. Paste your C code.


4. Press the Play/Run button.


5. Output will appear at bottom.

   ******SCREENSHORTS******
   
   **1)MAIN MENU**

<p align="center">
  <img src="https://github.com/praharshavasili-1681/course_project_1/blob/54282a1348699c7f88d8fe3b56ec9abd6b89ccc0/SC1.jpeg" width="500">
</p>

**2)ADDING AN EMPLOYEE**
<p align="center">
  <img src="https://github.com/praharshavasili-1681/course_project_1/blob/54282a1348699c7f88d8fe3b56ec9abd6b89ccc0/SC2.jpeg" width="500">
</p>

**3)DISPLAYING EMPLOYEE LIST**

<p align="center">
  <img src="https://github.com/praharshavasili-1681/course_project_1/blob/54282a1348699c7f88d8fe3b56ec9abd6b89ccc0/SC3.jpeg" width="500">
</p>

**4)APPLYING LEAVE**
<p align="center">
  <img src="https://github.com/praharshavasili-1681/course_project_1/blob/54282a1348699c7f88d8fe3b56ec9abd6b89ccc0/SC4.jpeg" width="500">
</p>

**5)CHECKING BALANCE**

<p align="center">
  <img src="https://github.com/praharshavasili-1681/course_project_1/blob/54282a1348699c7f88d8fe3b56ec9abd6b89ccc0/SC5.jpeg" width="500">
</p>

**6)EXIT SCREEN**

<p align="center">
  <img src="https://github.com/praharshavasili-1681/course_project_1/blob/54282a1348699c7f88d8fe3b56ec9abd6b89ccc0/SC6.jpeg" width="500">
</p>







