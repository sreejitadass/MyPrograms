.data
msg1: .asciiz "Enter a number: "
msg2: .asciiz "Even number"
msg3: .asciiz "Odd number"

.text
.globl main
main:
    li $v0,4
    la $a0,msg1
    syscall

    li $v0,5
    syscall
    
    move $t0,$v0

    jal EvenOddCheck

    EvenOddCheck:
        li $t1,0
        rem $t1,$t0,2
        beqz $t1, Even

        li $v0,4            #print if odd
        la $a0,msg3
        syscall 

        j exit 

    Even:
        li $v0,4
        la $a0,msg2
        syscall  

        j exit

    exit:
        li $v0,10
        syscall    