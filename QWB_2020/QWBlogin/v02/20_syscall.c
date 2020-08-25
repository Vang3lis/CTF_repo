switch op[0]:

// SYSCALL
// size == 2
case 0x20:
    r00 == 0
        op[1] == 0xa
        
        fd = open(data[r01], r02)
        insert fd into vm.io_file

    r00 == 1
        op[1]&0xf == 0x8:
            read(r01, data[r02], r03)

        op[1]&0xf == 0x9
            read(r01, stack[r02], r03)

    r00 == 2
        op[1]&0xf == 0x8:
            write(r01, data[r02], r03)
        
        op[1]&0xf == 0x9:
            write(r01, stack[r02], r03)

    r00 == 3
        close(r01)

