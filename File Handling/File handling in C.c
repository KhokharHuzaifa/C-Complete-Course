#inc<stdio.h>
int main(){
    // In C, you can create, open, read, and write to files by declaring a pointer of type FILE, and use the fopen() function
    
    // Syntax :
    FILE *fptr
fptr = fopen(filename, mode);

// FILE is basically a data type, and we need to create a pointer variable to work with it (fptr). For now, this 
// line is not important. It's just something you need when working with files.

// To actually open a file, use the fopen() function, which takes two parameters

// filename:	The name of the actual file you want to open (or create), like filename.txt

// mode:	A single character, which represents what you want to do with the file (read, write or append):
// w - Writes to a file
// a - Appends new data to a file
// r - Reads from a file
}
