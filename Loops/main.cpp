//  main.cpp
//  Loops
//  Created by Rhys Julian-Jones on 5/18/23.

#include <iostream>

int main() {
    
    /*
    - A loop is a programming tool that repeats some code or a set of instructions until a specified condition is reached. As a programmer, you’ll find that you rely on loops all the time! You’ll hear the generic term “iterate” when referring to loops; iterate simply means “to repeat”.
    - When we see that a process has to repeat multiple times in a row, we write a loop. Loops allow us to create efficient code that automates processes to make scalable, manageable programs. In this lesson, we will learn about two types of loops: while loops and for loops!
    */
    
    /*
    - So first up… the while loop! Before we dive deep into the syntax of the while loop, let’s do a demo.
    - Inside enter_pin.cpp, we have a program that asks and checks for a password. It uses a while loop to ask the user for the password over and over again.
    - Note: You don’t need to understand the code right now.
    */
    
    // 1. Compile and execute using the terminal. When the program asks you to Enter your PIN:, try the following: Press 1111 and press enter. Press 2019 and press enter. Press 1234 and press enter.
    
    int pin = 0;
    int tries = 0;
      
    std::cout << "BANK OF CODECADEMY\n";
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    tries++;

    while (pin != 1234 && tries < 3) {
        std::cout << "Enter your PIN: ";
        std::cin >> pin;
        tries++;
    }
      
    if (pin == 1234) {
        std::cout << "PIN accepted!\n";
        std::cout << "You now have access.\n";
    }
    
    /*
    - So now that we got a demo of loops, let’s write one! The while loop looks very similar to an if statement. And just like an if statement, it executes the code inside of it if the condition is true.
    - However, the difference is that the while loop will continue to execute the code inside of it, over and over again, as long as the condition is true. Here is what a while loop looks like: while (condition) { statements }
    - In other words, instead of executing if something is true, it executes while that thing is true. while (guess != 8) { std::cout << "Wrong guess, try again: "; std::cin >> guess; }
    - In this example, while guess is not equal to 8, the program will keep on asking the user to input a new number. It will exit the while loop once the user types in 8 and then the program will continue.
    */
    
    // 1. Inside guess.cpp, we have a program that asks the user to guess a number between 1-10 and the answer is 8! Now instead of just asking for the user to answer it once, let’s add a while loop so that they can guess up to 50 more times if they get it wrong! The && symbol means and and it combines two conditions into one. In this while loop, while guess does not equal to 8 and the number of tries is less than 50, we are asking the user to type a number once again. And then we add 1 to tries using the ++ operator.
    
    int guess;
    tries = 0;

    std::cout << "I have a number 1-10.\n";
    std::cout << "Please guess it: ";
    std::cin >> guess;
     
    while(guess != 8 && tries < 50) {
        std::cout << "Wrong guess, try again: ";
        std::cin >> guess;
        tries++;
    }

    if(guess == 8) {
        std::cout << "You got it!\n";
    }
    
    /*
    - The last one we held your hand, so let’s try one on your own. As an example of iteration, we have the first program ever to run on a stored-program computer (the EDSAC). It was written and run by David Wheeler in the computer laboratory at Cambridge University, England, on May 6th, 1948, to calculate and print a simple list of squares like the following:
    - On the left, there are numbers from 0 to 9. On the right are their squares. For example, for the number 9, 9 * 9 = 81.
    */
    
    // 1. In square.cpp, write this using a while loop in C++. If you notice the Run button spinning continuously or a “Lost connection to Codecademy” message in this exercise, you may have an infinite loop! If the stop condition for our loop is never met, we will create an infinite loop which stops our program from running anything else. To exit out of an infinite loop in an exercise, refresh the page — then fix the code for your loop.
    
    int i = 0;
    int square = 0;
    
    while(i <= 9) {
        square = i * i;
        std::cout << i << "\t" << square << "\n";
        i++;
    }
    
    /*
    - Iterating over a sequence of numbers is so common that C++, like most other programming languages, has a special syntax for it. When we know exactly how many times we want to iterate (or when we are counting), we can use a for loop instead of a while loop: for (int i = 0; i < 20; i++) { std::cout << "I will not throw paper airplanes in class.\n"; }
    - Let’s take a closer look at the first line: for (int i = 0; i < 20; i++)
    - There are three separate parts to this separated by ;:
        > The initialization of a counter: int i = 0
        > The continue condition: i < 20
        > The change in the counter (in this case an increment): i++
    - So here we are creating a variable i that starts from 0. We will repeat the code inside over and over again when i is less than 20. At the end the for loop, we are adding 1 to i using the ++ operator.
    */
    
    // 1. Run the code to see the for loop in action!
    
    for (int i = 0; i < 10; i++) {
        std::cout << "I will not throw paper airplanes in class.\n";
    }
    
    /*
    - In the last exercise, we saw an example of an incrementing for loop so here we are going to show you how to write a for loop where the counter goes down. When we know exactly how many times we want to iterate (or when we are counting), we can use a for loop instead of a while loop:
    - Incrementing for loop: for (int i = 0; i < 20; i++) { Statements }
    - Decrementing for loop: for (int i = 20; i > 0; i--) { Statements }
    */
    
    // 1. Write a 99bottles.cpp program that prints the verses of the “99 Bottles” song. Each stanza goes something like this: i bottles of pop on the wall. Take one down and pass it around. i-1 bottles of pop on the wall. Hint: Use a decrementing for loop! If you notice the Run button spinning continuously or a “Lost connection to Codecademy” message in this exercise, you may have an infinite loop! If the stop condition for our loop is never met, we will create an infinite loop which stops our program from running anything else. To exit out of an infinite loop in an exercise, refresh the page — then fix the code for your loop.
    
    for(int i = 99; i != 0; i--) {
        std::cout << i << " bottles of pop on the wall.\n";
        std::cout << "Take one down and pass it around.\n";
        std::cout << i - 1 << " bottles of pop on the wall.\n";
    }
    
    /*
    - Great Job! Key concepts covered in this lesson:
        > Loops perform repetitive actions so we don’t have to code those actions manually every time.
        > How to write while loops with a continue condition.
        > How to write for loops with a counter that increments or decrements.
    */
    
    // Fizz Buzz Project
    
    /*
    - Fizz Buzz is a classic developer interview question that is asked or referred to so often for so long, it is almost a cliché!
    - Though this challenge will appear very simplistic to those with some coding experience, it is designed to weed out 99.5% programming job candidates who cannot creatively use their coding knowledge to solve simple problems.
    - Want to give it a shot? Write a fizzbuzz.cpp program that outputs numbers from 1 to 100.
    - But for multiples of 3, print Fizz instead of the number and for the multiples of 5, print Buzz. For numbers which are multiples of both 3 and 5 print, FizzBuzz.
     */
    
    // 1. As the inventor of this challenge, Imran Ghory, states: "After a fair bit of trial and error I’ve come to discover that people who struggle to code don’t just struggle on big problems, or even smallish problems (i.e. write an implementation of a linked list). They struggle with tiny problems. So I set out to develop questions that can identify this kind of developer and came up with a class of questions I call “FizzBuzz Questions” named after a game children often play (or are made to play) in schools in the UK.”
    // 2. Let’s create a skeleton for the program. Add: int main() { // Brain explodes here: }
    // 3. How do we output all the numbers from 1 to 100? Well, we could write std::cout 100 times back to back but that’s no fun. What else can we do? That’s right! A for loop! Write a for loop that starts at 1 and iterates to 100.
    // 4. Inside the for loop, let’s output the counter i.
    // 5. And now we have all the numbers. Let’s solve the hard part. Before coding further, take out a piece of paper and brainstorm. How do we check for whether or not a number is divisible by 3? Hint: You will need a if/else if/else statement for this and also the modulo % operator! When you are ready, try to implement it.
    
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz\n";
        } else if(i % 3 == 0) {
            std::cout << "Fizz\n";
        } else if(i % 5 == 0) {
            std::cout << "Buzz\n";
        } else {
            std::cout << i << "\n";
        }
    }
 
    /*
    - The story goes that on September 9th, 1947, computer scientist Grace Hopper found a moth in the Harvard Mark II computer’s log book and reported the world’s first literal computer bug. However, the term “bug”, in the sense of technical error, dates back at least to 1878 and with Thomas Edison.
    - On your programming journey, you are destined to encounter innumerable red errors. Some even say, that debugging is over 75% of the development time. But what makes a programmer successful isn’t avoiding errors, it’s knowing how to find the solution.
    - In C++, there are many different ways of classifying errors, but they can be boiled down to four categories:
        > Compile-time errors: Errors found by the compiler.
        > Link-time errors: Errors found by the linker when it is trying to combine object files into an executable program.
        > Run-time errors: Errors found by checks in a running program.
        > Logic errors: Errors found by the programmer looking for the causes of erroneous results.
    - In this mini-lesson, we will be looking at different errors and different error messages, and we’ll teach you how to think about errors in your code a little differently.
    */
    
    /*
    - When we are writing C++ programs, the compiler is our first line of defense against errors.
    - There are two types of compile-time errors:
        > Syntax errors: Errors that occur when we violate the rules of C++ syntax.
        > Type errors: Errors that occur when there are mismatch between the types we declared.
    - Some common syntax errors are:
        > Missing semicolon ;
        > Missing closing parenthesis ), square bracket ], or curly brace }
    - Some common type errors are:
        > Forgetting to declare a variable
        > Storing a value into the wrong type
    - The compiler will tell us where (line number) it got into trouble and its best guess as to what is wrong.
    */
    
    // 1. Try compiling the code and find the compile-time error in millionaire.cpp.
    
    char answer;
    int score = 0;
      
    std::cout << "Who Wants To Be a Millionaire\n\n";
    std::cout << "Question 1)\n\n";
    std::cout << "For ordering his favorite beverages on demand, LBJ had four buttons installed in the Oval Office labeled 'Coffee', 'Tea', 'Coke', and what?\n\n";
    std::cout << "A. Fresca   B. V8  \n";
    std::cout << "C. Yoo-hoo  D. A&W \n\n";
    std::cout << "Enter your answer: ";
    std::cin >> answer;
      
    if (answer == 'A' || answer == 'a') {
        score = score + 100;
        std::cout << "Correct!\n";
    }
    
    /*
    - Sometimes the code compiles fine, but there is still a message because the program needs some function or library that it can’t find. This is known as a link-time error.
    - As our program gets bigger, it is good practice to divide the program into separate files. After compiling them, the linker takes those separate object files and combines them into a single executable file. Link-time errors are found by the linker when it is trying to combine object files into an executable file.
    - Some common link-time errors:
        > Using a function that was never defined (more on this later)
        > Writing Main() instead of main()
    - These errors are more hard to find, but remember, Google is your friend! Here, a good Google search would be: “C++ undefined reference to main”.
    */
    
    // 1. Try compiling to find the link-time error in sum.cpp.
    
    int num = 0;
    int sum = 0;
      
    std::cout << "Enter a number: ";
    std::cin >> num;
      
    for(int i = 1; i <= num; i++) {
        sum = sum + i;
        std::cout << i << " ";
    }
      
    std::cout << "Sum: " << sum << "\n";
    
    /*
    - If our program has no compile-time errors and no link-time errors, it’ll run. This is where the fun really starts.
    - Errors which happen during program execution (run-time) after successful compilation are called run-time errors. Run-time errors occur when a program with no compile-time errors and link-time errors asks the computer to do something that the computer is unable to reliably do.
    - It happens after we give the ./ execute command: ./a.out
    - Some common run-time errors:
        > Division by zero also known as division error. These types of error are hard to find as the compiler doesn’t point to the line at which the error occurs.
        > Trying to open a file that doesn’t exist
    - There is no way for the compiler to know about these kinds of errors when the program is compiled.
    */
    
    // 1. There’s a run-time error in ratio.cpp. This program is supposed to find the ratio of a table’s dimensions, which is supposed to be 20 x 30.
    
    int width = 20;
    int length = 30;
    int ratio = width / length;
      
    std::cout << ratio << "\n";
    
    /*
    - Once we have removed the compile-time errors, link-time errors, and run-time errors, the program runs successfully. But sometimes, the program doesn’t do what we want it to do or no output is produced. Hmmm…
    - These types of errors which provide incorrect output, but appears to be error-free, are called logical errors. These are one of the most common errors that happen to beginners and also usually the most difficult to find and eliminate.
    - Logical errors solely depend on the logical thinking of the programmer. Your job now is to figure out why the program didn’t do what you wanted it to do.
    - Some common logic errors:
        > Program logic is flawed
        > Some “silly” mistake in an if statement or a for/while loop
    - Note: Logic errors don’t have error messages. Sometimes, programmers use a process called test-driven development (TDD), a way to give logic errors error messages and save yourself a lot of headaches!
    */
    
    // 1. Compile and execute steps.cpp. There should be no error messages. But the program is supposed to output steps from #1 - #10. The program is somehow starting from 0… Find the logic error.
    
    int steps = 10;
      
    for(int i = 1; i <= steps; i++) {
        std::cout << "Step #";
        std::cout << i << "\n";
    }
    
    /*
    - Finding bugs is a huge part of a programmer’s life. Don’t be intimidated by them… embrace them. Errors in your code mean you’re trying to do something cool!
    - In this lesson, we have learned about the four types of C++ errors:
        > Compile-time errors: Errors found by the compiler.
        > Link-time errors: Errors found by the linker when it is trying to combine object files into an executable program.
        > Run-time errors: Errors found by checks in a running program.
        > Logic errors: Errors found by the programmer looking for the causes of erroneous results.
    - Remember, Google and Stack Overflow are a programmer’s best friends. For some more motivation, check out this blog post: Thinking About Errors in Your Code Differently. We wish you the best of luck in your bug-squashing journey.
    */
    
    // 1. Optional: Because your friend didn’t debug along the way, they ended up with a super buggy program. Can you be a bug detective and help them debug their program? The final program should print a fortune message like: 🥠 Flattery will go far tonight. Final tip: If you encounter a long error message, always scroll to the top and try to debug the very first bug.
    
    srand(time(NULL));
    int fortune = rand() % 10;
      
    if(fortune == 0) {
        std::cout << "Flattery will go far tonight.\n";
    } else if(fortune == 1) {
        std::cout << "Don't behave with cold manners.\n";
    } else if (fortune == 2) {
        std::cout << "May you someday be carbon neutral\n";
    } else if (fortune == 3) {
        std::cout << "You have rice in your teeth.\n";
    } else if (fortune == 4) {
        std::cout << "A conclusion is simply the place where you got tired of thinking.\n";
    } else if (fortune == 5) {
        std::cout << "No snowflake feels responsible in an avalanche.\n";
    } else if (fortune == 6) {
        std::cout << "He who laughs last is laughing at you.\n";
    } else if (fortune == 7) {
        std::cout << "If you look back, you'll soon be going that way.\n";
    } else if (fortune == 8) {
        std::cout << "You will die alone and poorly dressed.\n";
    } else if (fortune == 9) {
        std::cout << "The fortune you seek is in another cookie.\n";
    } else {
        std::cout << "Hi.\n";
    }
    
    //Text Adventure Project
    
    /*
    - This project is slightly different than others you have encountered thus far on Codecademy. Instead of a step-by-step tutorial, this project contains a series of open-ended requirements which describe the project you’ll be building. There are many possible ways to correctly fulfill all of these requirements, and you should expect to use the internet, Codecademy, and other resources when you encounter a problem that you cannot easily solve.
    - Create a C++ text adventure with the storyline of your choosing. The program should use your knowledge of C++ conditionals, logic, and loops.
    - If you choose to do this project on your computer instead of Codecademy, you can download what you’ll need by clicking the “Download” button below. If you need help setting up your computer, be sure to check out our setup guide.
    */
    
    // 1. In order to complete this project, you should be familiar with C++ conditionals and control flow, loops, and setting variables using user input. Ideally, you’ve finished the first four sections of Learn C++ (through Loops).
    // 2. Your program should have a storyline with: a beginning, at least three possible endings. It can help to map out your ideas on paper and draw out your possible branches before you begin coding anything. In our solution, we used Alice’s Adventures in Wonderland as the premise for our storyline, but you can choose any topic you like! Some possible ideas include: A fantasy book you love, Your favorite TV show, A funny movie, A murder mystery, A game show
    // 3. Your program should contain at least three branch points where the user must make a choice about what to do next. At each branch point, the program should: give the user at least two choices, accept user input. Note that not every story branch needs its own ending; it can also add something and then reconnect with another storyline.
    // 4. Your program should incorporate at least one kind of loop. Loops come in handy in a couple scenarios: to validate user input (e.g., check if the user entered something other than your listed choices and then list the choices again), to give the user multiple chances to choose a specific outcome (e.g., give a user three chances to pick an option that won’t get them killed), to continue the adventure until the user makes a particular choice. Note: On Codecademy’s platform, if you plan to obtain user input within a loop, we recommend sticking with a for loop. Due to the way our platform is set up, a while loop that includes user input will trigger an infinite loop.
    // 5. Your program should handle user choices using conditional logic. We encourage you to use if/else if statements and switch statements where you see fit. Note: If your user has reached an ending, you can use return 0; to exit the main() function and end the program.
    
    char ch1, q2, q3;

    // Question 1
    std::cout << "Welcome to My Program. \n";
    std::cout << "Everyday we wake up in a particular mood that leads our day for the most part. \n";
    std::cout << "Which mood are you waking up to? \n \n";
    std::cout << "A.) Angry \n";
    std::cout << "B.) Blah \n";
    std::cout << "C.) Happy \n";
    std::cin >> ch1;

    if(ch1 == 'a' || ch1 == 'A') {
        std::cout << "We are off to a bad start, Everyone    sucks. \n\n";
        std::cout << "What are you going to do next to change your day? \n";
        std::cout << "A.) GO GET COFFEE!! \n";
        std::cout << "B.) Just Go to Work \n";
        std::cout << "C.) Go Back To Sleep \n";
        std::cin >> q2;

           
           // Q2 question
           if (q2 == 'a' || q2 == 'A') {
               std::cout << "Things Look Better, You might survive";
           } else if (q2 == 'b' || q2 == 'B') {
               std::cout << "You're a Ticking Time Bomb!";
           } else if ( q2 == 'c' || q2 == 'C') {
               std::cout << "Nothing can beat sleep!!" ;
           } else {
               std::cout <<"Error, Not A Choice" ;
           }


    }

    if(ch1 == 'b' || ch1 == 'B') {
        
           std::cout << "Nothing seems to motivate you and all you want to do is lay in bed. \n";
           std::cout << "What are you going to do next to change your day? \n";
           std::cout << "A.) GO GET COFFEE!! \n";
           std::cout << "B.) Ditch work to go to the beach! \n";
           std::cout << "C.) Go Back To Sleep \n";
           std::cin >> q3;

           //Question 3
           if (q3 == 'a' || q3 == 'A') {
               std::cout << "Things Look Better, You might survive";
           } else if (q3 == 'b' || q3 == 'B') {
               std::cout << "You're day Just got Better! Enjoy!" ;
           } else if ( q3 == 'c' || q3 == 'C') {
               std::cout << "Nothing can beat sleep!!";
           } else {
               std::cout <<"Error, Not A Choice ----";
           }
    }

    if(ch1 == 'c' || ch1 == 'C') {
           std::cout << "Nothing Can Ruin Your Day!! \n";
           std::cout << "ENJOY!! \n";
    }
    
    for(int d = 0; d <= 10; d++) {
      std::cout << "THANK YOU \n";
    }
    
    
}
