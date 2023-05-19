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
 
}
