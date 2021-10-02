.globl factorial

.data
n: .word 3

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
    addi t0, x0, 1     # result = 1
    addi t1, x0, 1     # i = 1
    add  t2, x0, a0    # n
Loop:
    bge  t1, t2, Done  # i <= n
    addi t1, t1, 1     # i++
    mul  t3, t0, t1    # result = result * i
    addi t0, t3, 0
    j Loop
Done:
    addi a0, t0, 0
    jr ra
