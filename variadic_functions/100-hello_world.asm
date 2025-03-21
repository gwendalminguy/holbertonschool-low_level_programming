section .data					; Section of variable initialization
	message DB "Hello, World", 0xa		; Initializing variable message to text and newline
	length	EQU $ - message			; Initializing variable length to size of message

section .text					; Section of code
	global _start				; Declaring entry point
_start:						; Defining entry point
	MOV RAX, 1				; Calling sys_write(
	MOV RDI, 1				;	Setting file descriptor to 1 (STDOUT)
	MOV RSI, message			;	Giving adress of string
	MOV RDX, length				;	Giving number of bytes );
	SYSCALL					; Executing sys_write

	MOV RAX, 60				; Calling sys_exit(
	MOV RDI, 0				;	Setting exit_status to 0 );
	SYSCALL					; Executing sys_exit
