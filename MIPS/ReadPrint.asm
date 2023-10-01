.data
str1: .asciiz "Enter the number: "
str2: .asciiz "The number entered is: "

.text
.globl main
main:

    li $v0,4        #prints str1
    la $a0,str1
    syscall 

    li $v0,5        #take user input
    syscall

    move $t0,$v0

    li $v0,4        #prints the number with message
    la $a0,str2
    syscall 

    li $v0,1
    move $a0, $t0
    syscall 

    li $v0,10
    syscall

