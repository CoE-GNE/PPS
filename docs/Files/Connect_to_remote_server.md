[Index](../Lab.md)

# Laboratory Session No. 01

You need to read these instructions very carefully, and apply in laboratory
session.

## Information you needed

For laboratory session, you will work on a remote GNU/Linux server. You must
know the server's name, your user ID, password and the port number, which
allow you to connect the server. This needed information is tabulated below:

| Item | Value |
|:--- |:--- |
| GNU/Linux Server | code.gndec.ac.in or code.gdy.club |
| User ID | YourRollNumber |
| Password | If you don't know, contact office of Applied Science Dept. |
| Port | 22 |

## How to access remote server

Use `mosh` software. In laboratories, teacher will tell you the instruction
how to connect to remote server. Software will be already installed in
computers avaliable for your laboratory work.

If you wish to connect from your mobile, or desktop, then Visit [mosh's
Download page](https://mosh.org/#getting). Follow instructions to get the
software and to install it.

Launch `mosh`, use your userID, `code.gndec.ac.in` as server name, and `22`
as port to connect remote server. Read the response from computer very carefully
and act accordingly. 

First time, if anyone try to connect to a new remote server, then he will be
presented with following text:

	The authenticity of host 'code.gdy.club (<no hostip for proxy command>)' can't be established.
	ECDSA key fingerprint is SHA256:nnqmn/lV3O3BUIYUQq2kfN8auq9+d6oq1acUVc5kFWc.
	Are you sure you want to continue connecting (yes/no)?


Now you are supposed to read it **very** carefully, if you type `y` or `n`, then
you will be surprised (I say, rather **_SHOCKED_**) by getting messages like:

	Are you sure you want to continue connecting (yes/no)? n
	Please type 'yes' or 'no': y
	Please type 'yes' or 'no': yes

So you need to type three letters (characters) as instructed by the computer,
which are y e s. Single character will not work. (Exact message / instruction
may be different, so bottom line is that you need to read message displayed
by the computer, very carefully.)

After this, once connection established (make sure Internet is working, and
there is not typing error/mistake), remote server will request you for
password. Enter you password. Then you are connected to remote server, if you
are autorised, and you entered correct information.

Once you are connected to remote server, you will be presented a big black rectangular
area, in which there is a small solid rectangle (of the size of a single
character), after some text like `hsrai@ubuntu:~$ `, where `hsrai` is user on remote
server named `ubuntu`, like:

	Welcome to Coding Server maintained by
	Computer Centre of GNDEC, Ludhiana,
	Specifically for the students of
	1st year for their course:
	=================================
 	
	  Programming for Problem Solving
	  
	=================================
	To know how to work, read:
	
	 https://coe-gne.github.io/PPS/index.html or
	 http://gdy.club/ppp
	 
	hsrai@ubuntu:~$ 

It will display something about itself, and may include some welcome
message. The above message is the sample, The message, you get may be different.

At the position of cursor (Solid Rectangle), you may type from keyboard. 
Type following command.

	hsrai@ubuntu:~$ ls

`hsai@ubuntu:~` will be there already, and you need to type only:

	ls

Type as below, for the user `radha`.

	radha@ubuntu:~$ ls
	radha@ubuntu:~$ xmake create -l c first
	radha@ubuntu:~$ cd first/
	radha@ubuntu:~/first$ xmake
	radha@ubuntu:~/first$ xmake run
	radha@ubuntu:~/first$ nano src/main.c 
	
When you type above commands, you will some response from computer as well. Complete interaction will look like:

	radha@ubuntu:~$ ls
	public_html

Now you have entered in to a remote server. That may be a computer on
network, physically placed on the same table, or may in Canada, Europe, or
USA. That may be an old machine or may be a super computer.

If you are able to do this, then pat yourself. You have reached first
destination. But interesting journey yet to come!

Continue reading [next instruction](Compiling_and_running_1st_program.md), may be after a tea break ;-) 

[Index](../Lab.md) | [Next](Compiling_and_running_1st_program.md)
