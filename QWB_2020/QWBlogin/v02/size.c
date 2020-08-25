switch op[1]&0xf
    case 0x00, 0x0b, 0xc, 0xd, 0xe, 
        4
    case 0x01, 0x02, 0x03, 0x04,
        0xb
    case 0x5:
        0x15: int8_t 4
        0x25: int16_t 5
        0x35: int32_t 7
        0x45: int64_t 0xb 
    case 0x6:
        3
    case 0x7:
        0x17: int8_t 3
        0x27: int16_t 4
        0x37: int32_t 6
        0x47: int64_t 10
    case 0x8:
        if op[0] == 0x20:
            2
        else:
            10
    case 0x9:
        if op[0] != 0x20 && a[0x14] - a[0x12] < 10
            return 1;
    case 0xa:
        2
    default:
        return 1;