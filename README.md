# CS235-DataStructures-Hello-World

# Step 1: Intall IDE and Text Editor

## Set up an Programming Environment

Download your favorite IDE (integrated development environment) and/or Text Editor.  All programming can be done using either an IDE or a Text Editor.  My favorite IDE for C++ is Clion, it is a paid environment but if you sign in with your student email than yuou can get it for free.  Another popular IDE is Visual Studio.  

In addition to downloading an IDE, I would recommend getting both a Text Editor because it is often easier to look at files in a Text Editor rather than an IDE but it will be much easier to program using an IDE.  In terms of Text Editors I use Sublime 3 (free).  Other options are Notepad++, Atom, Emacs.  It is not particularly important which one you choose, just one that you think is cool!


# Step 2: Getting connected with GitHub

## Create a repository on GitHub

## Clone the new repository

To do this go to the main page for the repository you just created then click on code and copy the HTTPS link.  On the Terminal (Linux or Mac) or Command Prompt (Windows) cd into the folder where you want the repository.   I perfer to put things in the default place for Clion in a folder called CLionProjects.  If you were to do the same than you would use the following command

```` cd C:\Users\[USER]\CLionProjects\ ````


Once you are in the folder where you want your repository and type 

```` git clone [HTTPS_LINK] ````

where [HTTPS_LINK] is the link you copied.  This will copy all of the files from GitHub into the specified folder.  It will also make a hidden folder called .git which stores relevant information to making sure your repository works properly.


Other basics commands of git source control:

```` git add [FILE]````

All files that you want to be managed under source control need to be added to the repository.  If you dont add them to git then git will not manage changes made to the project.  

```` git commit [COMMIT_MESSAGE] ````

Record changes to the repository.

```` git push ````

Pushes committed changes to GitHub.

```` git pull ````

Pulls changes from GitHub.

```` git merge ````

Deals with conflicts in change histories.

# Step 3: Write Hello World Program

Create a file named HelloWorld.cpp

```` 
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc < 2) {
        cout << "Hello World" << endl;
    }
    else {
        cout << "Hello " << argv[1] << ", welcome to the world of computer science!" << endl;
    }
    return 0;
}
````

# Step 4: Setting up Compiler and Make

In this class we will use g++ to compile our projects from the command line.  In order to do this, you will need to download a c++ compiler called g++.

## Windows

Download and install MinGW.  It can be found at the following link:

https://sourceforge.net/projects/mingw/

## Mac

You first need to make sure that you have hombrew installed.  Type brew into the terminal and it should return to you some example usages or it might say '-bash: brew: command not found'.  

If you dont have homebrew install using instructions at 

[brew.sh](https://brew.sh/)

Once you have installed Hombrew install g++ using the command

```` brew install g++ ````


## Linux

type the following command into the terminal 

```` sudo apt install g++ ````

## Verifying

You should have g++ installed on your computer now.  If you type g++ in your Terminal / Command Prompt you should get a responce like 'error no imput files'.

## Compiling your project

Now that we have g++ installed it is time to compile your HelloWorld program.  If you type 

```` g++ *.cpp -o hello ````

We use \*.cpp to represent all files that end with .cpp and then we pass hello as an argument for -o as a name for the program.

Now if we type  ```` hello ```` into the terminal it should run our hello world program.

# Step 5: Putting it all together

Try to add your new HelloWorld to GitHub.

## Add files to your git project

Run the command:

```` git add *.cpp ````

## Commit the changes to the git project.

Run the command:

```` git commit -m "Hello World Program" ````

## Push changes to GitHub repository.

Run the command:

```` git push ````

Now all of your changes should appear on GitHub.


