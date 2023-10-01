.data
str1: .asciiz "Enter the decimal number: "
str2: .asciiz "The decimal number is: "
str3: .asciiz "\nThe integer part is: "
str4: .asciiz "\nThe fractional part is: "
num: .float 0.0
.text
.globl main

main:
    li $v0,4
    la $a0,str1
    syscall

    li $v0,6
    syscall
    s.s $f0,num
    mov.s $f1,$f0

    li $v0,4
    la $a0,str2
    syscall

    li $v0,2
    l.s $f12,num
    syscall

    la $t1,num
    l.s $f12,($t1)
    cvt.w.s $f0,$f12
      
    mfc1 $t0,$f0

    li $v0,4
    la $a0,str3
    syscall

    li $v0,1
    move $a0,$t0
    syscall

    cvt.s.w $f0,$f0
    sub.s $f1,$f1,$f0
    l.s $f4,milli
    mul.s $f1,$f1,$f4
    cvt.w.s $f1,$f1
    mfc1 $t1,$f1
    move $a0,$t1
    syscall

    li $v0,4
    la $a0,str4
    syscall

    sub.s 

    li $v0,10
    syscall

