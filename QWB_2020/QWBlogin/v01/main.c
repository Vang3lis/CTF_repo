int main(int argc, char** argv)
{
    len = sub_ba0(argv[1]);
    if(len <= 0)
        exit(0);
    
    fd = open(argv[1], 0);
    if(fd < 0)
        exit(0);
    
    v8 = mmap(0, len, 1, 2, fd, 0);
    if(!v8)
        exit(0);
    
    // check image format
    if(memcmp(v8, "\x61\xde\x10\ef", 4))
        exit(2);
    
    // check lenth
    // segment?

    // v8[6, 14) ~ [14, 22) lenth
    if( *(int64_t*)(v8+6) > len || *(int64_t*)(v8+14) > len - *(int64_t*)(v8+6) )
        exit(3);
    
    // v8[22, 30) ~ [30, 38)
    if( *(int64_t*)(v8+22) > len || *(int64_t*)(v8+30) > len - *(int64_t*)(v8+22) )
        exit(4);

    // v[38, 46) > v8[14, 22)
    if( *(int64_t*)(v8+38) >= *(int64_t*)(v8+14) ) 
        exit(5);

    v9 = calloc(0xD0, 1);
    // v[6, 14) == offset v{14, 22) == segment_size
    // v9[21] = calloc(1, v8[14, 22)) 0x1000 向上取整
    v9[21] = calloc(1, v8[14, 22))
    memcpy(v9[21], &(v8[v8[6, 14)]),  v8[14, 22))
    v[20] = segment_size;

    // 
    v9[23] = calloc(1, v8[30, 38))
    memcpy(v9[23], &(v8[v8[22, 30)]), v8[30, 38))
    v9[22] = segment_size; 

    v9[25] = calloc(1, 0x20 000);
    v9[24] = 0x20 000;
    v9[18] = v8[38, 46)

    g_Var = calloc(0x18, 1);
    memset(g_Var, 0x18, 0);

    //链表结构 可能记录 segment flag 的
    // g_Var[0x10, 0x18) -> struct_18 -> struct_18;
    
    while(!sub_c1a(v9))
    {}
}