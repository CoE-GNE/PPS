[Index](../Lab.md) | [Previous](Compiling_and_running_1st_program.md)

# Compiling and running program by amending messages

Now we will change the message written using `puts` function.  You may edit
this file, with your favorite editor (like `nano`, `pico`, `joe`, `emacs`,
`vim`, `slap` or [some thing different](https://www.tecmint.com/linux-command-line-editors/)).

Also read [this](https://itsfoss.com/command-line-text-editors-linux/) for
additional information.

or we can copy file form the
[Bank](https://github.com/CoE-GNE/PPS/tree/master/Batch2020/Bank).  File
name starting with `100` is our first program, then you may copy content
from `101` and then `102` in file `main.c`.  Copy or type content of
`102Address.m` from `Bank` folder, after creating a new project. Steps are
given below:

$ xmake create -l c ex102
create ex102 ...
  [+]: xmake.lua
  [+]: src/main.c
  [+]: .gitignore
create ok!
$ cd ex102/
$ nano src/main.c

With `Down Arrow` go the 5th line (having `printf`), and delete it by
pressing `^k`.  Copy content of
[102Address.m](https://github.com/CoE-GNE/PPS/blob/master/Batch2020/Bank/102Address.m)
(by selecting code part, right click and click on copy), then press middle
button of mouse in file opened in `nano` editor.  Press `Enter/Return` to
bring `retun 0;` to next line(optional).  Like wise you may you tab / spaces
/ Enter to make code look beautiful.

Read the file carefully.

Exit and follow instructions to save the file.

	$ xmake
	checking for architecture ... x86_64
	[ 50%]: ccache compiling.release src/main.c
	[ 75%]: linking.release ex102
	[100%]: build ok!
	$ xmake run
	Principal
	Panth Rattan Shiri Gurcharan Singh Tohra Complex
	Guru Nanak Dev Engineering College
	Gill Park
	Ludhiana - 141006
	India
	$ 

Study the file `main.c`, which is, at present, includes content of
`102Address.m` file and the output of the program.  You will find that we
have used `puts()` function for each line.  It will be nice, if we can use
only one `puts()`.  Try following:
	
Repeat the avoce procedure with file `103AddressOnePuts.m` from `Bank`, by
creating a new project with `xmake` utility.

Now, in file `main.c`, there is only one `puts()` function. But you will
find strange character in the message, which is `\n`. `\n` is equivalent of
`Enter` or `Return` key of the keyboard. It will insert new line.

In the file `main.c` we used one `puts()` and all the message typed
without the use of `Enter` key. This makes to read it difficult. It goes
outside the screen with. This problem can be resolved by typing `\` before
hitting `Enter` at the desired location. Normally, we don't wish to type
text beyond 72th column. So type `\` and press `Enter` somewhere near column
number from 65 to 72. Study the content of
`104AddressOnePutsContentMultiLine.m` and repeat above exercise with new C
project using `xmake` utility.

Now, study file `105AddressOnePutsContentMultiLineBetter.m`

This file is named as "Better". Why? Do you agree or not? Discuss in
"General Forum" at [Guru@GNE](http://guru.gndec.ac.in)

Sometimes we need to do things a number of times. Like to improve our
writing, we may be asked to write a particular line 10 times. If we do
something wrong, teacher may direct us to write something, 10 times, as a
part of punishment. In that case, what you will do? Will you write puts() 10
times, or copy paste, line to be repeated, 10 time. Ok, you may afford to
copy for 10 times, what you will do, if you are asked to repeat it for 100
times.

For such tasks, computer languages offer, looping facility. One of such
facility, in C, is call `for`. Study next file `106Punishment.m`.

What you found new in this file?

	for ( int i = 1; i <= 10; i++ )

The above line make next line:

	puts(" I will switch off lights, fans and AC when leaving room");

to execute 10 times. Great!

It instruct computer to execute `puts()` till value of `i` is less than `10`
or is equal to `10`.  `i` will have starting value of `1`, i.e.  initial
value if `i` is 1, and will be incremented by `1` each time `puts()` is
executed.  `int` in above line, does not stand for **initial**, but ot
stands for **Integer**.  As we need to count lines we wrote, and count
number can't be real / fractional number, and it has to be **Integer**, so
we made `i` to be **Integer** with the use of keyword `int`.

Lat us say, teacher instruct you to make use of multiple `puts()`, like:

	puts("I will switch off lights");
	puts("I will switch off fans");
	puts("and i will also switch off AC");
	puts(" when leaving room");

With further instruction, that each set of these four lines, MUST have two
blank lines between them.

Can you achieve it?

Try, and discuss in Technical Forum of guru.gndec.ac.in

[Index](../Lab.md) | [Next](YetToCome.md)

