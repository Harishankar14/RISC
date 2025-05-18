#basic code                #should probably change when on trial execution
 .text                     # Directive: enter text section
  .align 2                  # Directive: align code to 2^2 bytes
  .globl main               # Directive: declare global symbol main

main:                       # label for start of main
  addi sp,sp,-16            # allocate stack frame
  sw ra,12(sp)              # save return address
  lui a0,%hi(string1)       # compute address of
  addi a0,a0,%lo(string1)   # string1
  lui a1,%hi(string2)       # compute address of
  addi a1,a1,%lo(string2)   # string2
  call printf               # call function printf
  lw ra,12(sp)              # restore return address
  addi sp,sp,16             # deallocate stack frame
  li a0,0                   # load return value 0
  ret                       # return

  .section .rodata          # Directive: enter read-only data section
  .balign 4                 # Directive: align data section to 4 bytes

string1:                    # label for first string
  .string "Run Check, %s!\n"    # Directive: null-terminated string

string2:                    # label for second string
  .string "File"           # Directive: null-terminated string
