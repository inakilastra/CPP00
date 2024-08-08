# CPP00

<h1>C++ - Module 00</h1>

<br />

> [!NOTE] 
> Other Languages: [Castellano](https://github.com/inakilastra/CPP00/blob/main/LEEME.md)

<br />

> [!IMPORTANT]  
> At the end of each file you have an explanation of the code.

<br />

>
> - :white_check_mark: [Subject](#subject)
>
>   - :white_check_mark: [Exercise 00: Megaphone](#exercise-00-megaphone)
>
>   - :white_check_mark: [Exercise 01: My Awesome PhoneBook](#exercise-01-my-awesome-phonebook)
>
>   - :white_check_mark: [Exercise 02: The Job Of Your Dreams](#exercise-02-the-job-of-your-dreams)

<br /><br />

>
> - :white_check_mark: [Evaluation](#evaluation)
>
>   - :white_check_mark: [Ex00: Megaphone](#ex00-megaphone)
>
>   - :white_check_mark: [Ex01: My Awesome Phonebook](#ex01-my-awesome-phonebook)
>
>   - :white_check_mark: [Ex02: The Job Of Your Dreams](#ex02-the-job-of-your-dreams)

<br /><br /><br /><br />

## <h2>Subject</h2>

<h3>General rules</h3>

**Compiling**

- Compile your code with c++ and the flags -Wall -Wextra -Werror

- Your code should still compile if you add the flag -std=c++98

<br /><br />

**Formatting and naming conventions**

- The exercise directories will be named this way: ex00, ex01, ... , exn

- Name your files, classes, functions, member functions and attributes as required in the guidelines.

- Write class names in **UpperCamelCase** format. Files containing class code will always be named according to the class name. For instance:
ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you have a header file containing the definition of a class "BrickWall" standing for a brick wall, its name will be BrickWall.hpp.

- Unless specified otherwise, every output messages must be ended by a new-line character and displayed to the standard output.

- Goodbye Norminette! No coding style is enforced in the C++ modules. You can follow your favorite one. But keep in mind that a code your peer-evaluators can’t understand is a code they can’t grade. Do your best to write a clean and readable code.

<br /><br />

**Allowed/Forbidden**

You are not coding in C anymore. Time to C++! Therefore:

- You are allowed to use almost everything from the standard library. Thus, instead of sticking to what you already know, it would be smart to use as much as possible the C++-ish versions of the C functions you are used to.

- However, you can’t use any other external library. It means C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and that’s it.

- Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden. Otherwise, your grade will be -42.

- **You are allowed to use the STL in the Module 08 and 09 only**. That means: no **Containers** (vector/list/map/and so forth) and no **Algorithms** (anything that requires to include the <algorithm> header) until then. Otherwise, your grade will be -42.

<br /><br />

**A few design requirements**

- Memory leakage occurs in C++ too. When you allocate memory (by using the new keyword), you must avoid **memory leaks**.

- From Module 02 to Module 09, your classes must be designed in the **Orthodox Canonical Form, except when explicitely stated otherwise**.

- Any function implementation put in a header file (except for function templates) means 0 to the exercise.

- You should be able to use each of your headers independently from others. Thus, they must include all the dependencies they need. However, you must avoid the problem of double inclusion by adding **include guards**. Otherwise, your grade will be 0.

<br /><br />

**Read me**

- You can add some additional files if you need to (i.e., to split your code). As these assignments are not verified by a program, feel free to do so as long as you turn in the mandatory files.

- Sometimes, the guidelines of an exercise look short but the examples can show requirements that are not explicitly written in the instructions.

- Read each module completely before starting! Really, do it.

- By Odin, by Thor! Use your brain!!!

```
You will have to implement a lot of classes. 
This can seem tedious, unless you’re able to script your favorite text editor.
```

```
You are given a certain amount of freedom to complete the exercises.
However, follow the mandatory rules and don’t be lazy. 
You would miss a lot of useful information! Do not hesitate to read about
theoretical concepts.
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

### <h3>Exercise 00: Megaphone</h3>

Turn-in directory : ex00/<br />
Files to turn in : Makefile, megaphone.cpp<br />
Forbidden functions : None<br />

Just to make sure that everybody is awake, write a program that behaves as follows:

```
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
```

```
Solve the exercises in a C++ manner.
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

### <h3>Exercise 01: My Awesome PhoneBook</h3>

Turn-in directory : ex01/<br />
Files to turn in : Makefile, *.cpp, *.{h, hpp}<br />
Forbidden functions : None<br />

Welcome to the 80s and their unbelievable technology! Write a program that behaves like a crappy awesome phonebook software.

You have to implement two classes:

**PhoneBook**

- It has an array of contacts.

- It can store a maximum of **8 contacts**. If the user tries to add a 9th contact, replace the oldest one by the new one.

- Please note that dynamic allocation is forbidden.

**Contact**

- Stands for a phonebook contact.

In your code, the phonebook must be instantiated as an instance of the **PhoneBook** class. Same thing for the contacts. Each one of them must be instantiated as an instance of the **Contact** class. You’re free to design the classes as you like but keep in mind that anything that will always be used inside a class is private, and that anything that can be used outside a class is public.

```
Don’t forget to watch the intranet videos.
```

On program start-up, the phonebook is empty and the user is prompted to enter one of three commands. The program only accepts ADD, SEARCH and EXIT.

**ADD: save a new contact**

- If the user enters this command, they are prompted to input the information
of the new contact one field at a time. Once all the fields have been completed, add the contact to the phonebook.

- The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields.

**SEARCH: display a specific contact**

- Display the saved contacts as a list of **4 columns**: index, first name, last name and nickname.

- Each column must be **10 characters** wide. A pipe character (’|’) separates them. The text must be right-aligned. If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).

- Then, prompt the user again for the index of the entry to display. If the index is out of range or wrong, define a relevant behavior. Otherwise, display the contact information, one field per line.

**EXIT**

- The program quits and the contacts are lost forever!

**Any other input is discarded.**

Once a command has been correctly executed, the program waits for another one. It stops when the user inputs EXIT.

Give a relevant name to your executable.

```
http://www.cplusplus.com/reference/string/string/ and of course
http://www.cplusplus.com/reference/iomanip/
```


<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

### <h3>Exercise 02: The Job Of Your Dreams</h3>

Turn-in directory : ex02/<br />
Files to turn in : Makefile, Account.cpp, Account.hpp, tests.cpp<br />
Forbidden functions : None<br />

```
Account.hpp, tests.cpp and the log file are available for download on
the intranet page of the module.
```

Today is your first day at GlobalBanksters United. After successfully passing the recruitment tests (thanks to a few Microsoft Office tricks a friend showed you), you joined the dev team. You also know the recruiter was amazed by how quickly you installed Adobe Reader. That little extra made all the difference and helped you defeat all your opponents (aka the other applicants): you made it!

Anyway, your manager just gave you some work to do. Your first task is to recreate a lost file. Something went wrong and a source file was deleted by mistake. Unfortunately, your colleagues don’t know what Git is and use USB keys to share code. At this point, it would make sense to leave this place right now. However, you decide to stay. Challenge accepted!

Your fellow developers give you a bunch of files. Compiling tests.cpp reveals that the missing file is Account.cpp. Lucky you, the header file Account.hpp was saved. There is also a log file. Maybe you could use it in order to understand how the Account class was implemented.

You start to recreate the Account.cpp file. In only a few minutes, you code a few lines of pure awesome C++. After a couple of failed compilations, your program passes the tests. Its output matches perfectly the one saved in the log file (**except for the timestamps** which will obviously differ since the tests saved in the log file were run before you were hired).

Damn, you’re impressive!

```
The order in which the destructors are called may differ depending on
your compiler/operating system. So your destructors may be called in
a reverse order.
```

```
You can pass this module without doing exercise 02.
```

**Submission and peer-evaluation**

Turn in your assignment in your Git repository as usual. Only the work inside your repository will be evaluated during the defense. Don’t hesitate to double check the names of your files to ensure they are correct.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />


<br /><br /><br /><br />

## <h2>Evaluation</h2>

<h3>Guidelines</h3>

You must compile with clang++, with -Wall -Wextra -Werror 
As a reminder, this project is in C++98.
C++11 (and later) members functions or containers are NOT expected.

Any of these means you must not grade the exercise in question:

- A function is implemented in a header (except in a template)

- A Makefile compiles without flags and/or with something other than clang++

Any of these means that you must flag the project as Forbidden Function:

- Use of a "C" function (*alloc, *printf, free)

- Use of a function not allowed in the subject

- Use of "using namespace" or "friend"

- Use of an external library, or C++20 features

<h3>Ex00: Megaphone</h3>

This exercise is a warm-up intended to discover basic C++ i/o streams.

**Is it working?**

This exercise is a to_upper program with a specific behavior when run without any parameter.
Accept C++ approach (strings/upper).

<br /><br />

### <h3>Ex01: My Awesome Phonebook</h3>

This exercise is a first approach to writing a simple class and a small interactive program that uses it. If the exercise is not fully functional, grade what can be graded.

<br /><br />

**Error handling**

This exercise requires some error

<br /><br />

**The EXIT command**

Rate the EXIT command as described in the subject.

<br /><br />

**Visibility**

The attributes of the class Contact should be private and the class should expose the corresponding accessors.\r\nAlso check that anything that should always be used inside a class (not only in the Contact class) is private and that anything that can be used outside a class is public. Beginners tend to put everything in public, that's not what you want here!

<br /><br />

**The Contact and Phonebook class**

The code must include a Contact class, or whatever name the student used.
This class must contain attributes for the different fields.
The code must contain a Phonebook class with an array of contact inside.

<br /><br />

**Read/Eval loop**

The program must present a read/eval loop at some point: reading the input, evaluating it, then loop until an EXIT command appears in input.
This reading should be in C++ style! (std::cin)

<br /><br />

**The ADD command**

Rate the ADD command as described in the subject.

<br /><br />

**The SEARCH command**

Rate the SEARCH command as described in the subject. A minor divergence in the expected formating is not relevant.
This part aims to use C++ iomanips and that's what you should focus on.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br />

### <h3>Ex02: The Job Of Your Dreams</h3>

This exercise intends to extract information and directions from useless noise, and to insert new code into an existing context.

**Did you save the day?**

This exercise is pretty straight forward. Either Account.cpp works, either it does not. Compare the program's output and the provided log. Any difference apart from the timestamp means something is not ok for this exercise.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp00)
<br /><br /><br /><br />

