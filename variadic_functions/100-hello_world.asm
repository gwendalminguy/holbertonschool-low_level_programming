	section .data		; Section of variable initialization
string:	DB "Hello, World", 0xa	; Initializing variable string to text and newline
length:	EQU $ - string		; Initializing variable length to size of string

	section .text		; Section of code
	global main		; Declaring entry point
main:				; Defining entry point
	MOV RAX, 1		; Calling sys_write(
	MOV RDI, 1		;	Setting file descriptor to 1 (STDOUT)
	MOV RSI, string		;	Giving adress of string
	MOV RDX, length		;	Giving number of bytes );
	SYSCALL			; Executing sys_write

	MOV RAX, 60		; Calling sys_exit(
	MOV RDI, 0		;	Setting exit_status to 0 );
	SYSCALL			; Executing sys_exit
