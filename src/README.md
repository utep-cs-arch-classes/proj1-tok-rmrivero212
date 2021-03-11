Project 1: Tokenizer
====================
# Instructions:

To use Tokenizer utilize the Makefile to generate `gui` then run it as
follows:
- Type make in command line to create the gui file 
- Then run the file like so: ./gui

Once in the Tokenizer you will see a cursor `>`. This is the command line
where you have the freedom to write any sort of prompt in which the program
will return back in tokens. For example:
- > hello world //This is the user input
_ hello	  	//This is what is printed
  world		//This is what is printed
  > 

# History Instructions:

To view history of input strings simple type `!`. This will print all history
inputs starting from !0 to !N(N being the amount of lines the user has input)
For Example:
- > !			//The `!` symbol is passed through the input line
- !0 hello world      	//This is what is printed
  !1 how are you?	//This is what is printed
