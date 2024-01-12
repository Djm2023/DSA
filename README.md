<h1> 🚀 LEARN ABOUT BASICS OF OBJECT ORIENTED PROGRAMMING 🚀 </h1>

👉<b> What is the objective of Object oriented programming in C++</b> ?

💥 The main objective of Object oriented programming is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

<hr/>

✍ The building blocks for Object oriented programming are :-

✨ <b>class</b></br>
✨ <b>Object</b></br>
✨ <b>Encapsulation</b></br>
✨ <b>Abstraction</b></br>
✨ <b>Polymorphism</b></br>
✨ <b>Inheritance</b></br>
✨ <b>Dynamic Binding</b></br>
✨ <b>Message Passing</b></br>

<hr/>

👉<b>1. What is the class in Object oriented programming? </b> ?

💥 It is the user-defined data type which holds its own data members and member functions which can be accessed and used by creating an instance of that class.

<hr/>

👉<b> What is the data members and member functions? </b>

💥 DATA MEMBERS :- Data members are the data variables used in the class.
<br/>
💥 MEMBER FUNCTION :-Member function are the functions used in the class to modify data variables.

<hr/>

👉<b>2. What are Objects? </b>

💥 An Object is the instance of the class.

📝<b>IMPORTANT NOTE</b></br>

    When class is created no memory is allocated but when we create object then memory is allocated or in otherwords memory is allocated only when it is instantiated.

<br/>

<hr/>
<br/>
🏫 SYNTAX FOR WRITING CLASS :

CODE:

class className {

    Access specifier :           // can be public,private,protected.

    Data members ;               // variables to be used.

    member function(){           //Methods to access data members.
        1. .....
        2. ......
    }

};

📓 Semicolon is used to terminate the className.
<br/>
📓 "class" is the keyword.
<br/>
📓 By default the access specifier is private.

<hr/>

📝 <b> MORE ABOUT MEMBER FUNCTIONS: </b>

✨There are two ways by which we can define member function :-----

1. Inside class defination. // refer member.cpp CODE
2. Outside class defination

<hr/>

👉<b> How we can use member function outside class defination ?</b>

💥 To define a member function outside class defination we have to use the 'Scope Resolution Operator' i.e "::" along with the class name and function name.

<hr/>

👉<b> What are Constructors? </b>

💥 Constructors are the special class members which are being called by the compiler every time objects are instantiated.

📒 Constructor have same name as the name of the class.<br/>
📒 Constructor can be defined inside or outside class defination.<br/>

<hr/>

👉<b> What are the types of Constructors? </b>

💥 1. The Default Constructor.<br/> 2. The Parameterized Constructor.<br/> 3. The Copy Constructor.<br/>

📗 The Copy Constructor :- The copy constructor creates a new object which is the exact copy of the existing object.

📝The compiler provides the default copy constructor to all the classes.

   <!-- The type of constructor CODE is written in constructor.cpp -->

   <hr/>

👉3.<b> What is encapsulation? </b>

💥 encapsulation involves combining similar data and functions into a single unit called a class<br/>

<hr/>