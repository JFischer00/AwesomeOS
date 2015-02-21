#nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o -ffreestanding
ld -m elf_i386 -T link.ld -o awesome/boot/kernel.bin kasm.o kc.o 
qemu-system-x86_64 -kernel awesome/boot/kernel.bin
grub-mkrescue -o awesome.iso awesome/

read a


