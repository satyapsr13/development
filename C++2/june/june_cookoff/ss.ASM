INCLUDE Irvine32.inc

WriteString PROTO   ; optional
ReadInt PROTO   ; optional

.data

mess1 BYTE "Enter 10  integer numbers: ",0

mess2 BYTE "the sum of  ten  integer numbers: ",0
myarray SDWORD  10 DUP(?)

.code
main PROC

mov esi, OFFSET myarray
mov ecx, LENGTHOF myarray
call inputfornum   ; Call the procedure to input the numbers
mov esi, OFFSET myarray
mov ecx, LENGTHOF myarray
call arraysum   ; call procedure to add the numbers
Call displaysum   ;  call procedure to display the sum

exit
main ENDP

inputfornum PROC   ; start of the inputfornum procedure

pushad   ; save the registers

mov edx, OFFSET mess1 ; "Enter the numbers"  

; ======START of the loop
L1:

Call WriteString
call ReadInt ; input the number number
Call Crlf
mov [esi], eax
add esi, TYPE myarray

loop L1   ; loop back if ECX is not equal to zero
popad   ; restore the registers
ret   ; return to the procedure that do the call
inputfornum ENDP   ; End of the PROC

arraysum PROC   ;

push esi   ; Save the esi, and ecx
push ecx
mov eax,0

L2:
Add eax, [esi]
add esi,4
loop L2

pop ecx   ; restore ecx, esi
pop esi

ret
arraysum ENDP

; procedure to display the sum

displaysum PROC

pushad
mov edx, OFFSET mess2
call writeString
call writeInt
call Crlf

popad
ret
displaysum ENDP

END main