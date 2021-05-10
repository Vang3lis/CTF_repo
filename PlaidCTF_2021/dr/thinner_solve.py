#!/usr/bin/python

"""
cough
10174cdbf10810c
????
"""

template='10999f99999cdbc'

prices = [73331,31337,313337,133337]

price=73331
price=31337
price=313337
price=133337

hasher1 = (['05a','16b','27cf','38dx','49e'],0,7)
hasher2 = (list('0123456789abcdef'),7777,price)

def hashstr(s,h):
    l,dest,m = h
    hh=0
    for i in s:
        idx = -1
        for h,j in enumerate(l):
            if i in j:
                idx = h
                break
        else:
            return False
        hh = (hh*len(l)+idx)%m
    return hh==dest

def hunt(base_s,base_off=0,sign='9',cand='9876543210'):
    start_off = base_s.find('9',base_off)
    if start_off == -1:
        if hashstr(base_s,hasher1) and hashstr(base_s,hasher2) and base_s.count('10')>=3:
            global collector
            collector.append(base_s)
        return
    for i in cand:
        test_s = base_s[:start_off]+i+base_s[start_off+1:]
        hunt(test_s,start_off+1)

pattern_num = [
        ('10910','10999'),
        ('10910','91099'),
        ('10910','99109'),
        ('10910','99910'),
        ('10910','10'),
        ('10999','10910'),
        ('10','10910'),
]
pattern_letter = [
        ('f','cdbf'),
        ('cdbf','f'),
        ('fcdb','f'),
]
for price in prices:
    print 'price',price
    hasher2 = (hasher2[0],hasher2[1],price)
    for a,b in pattern_num:
        for c,d in pattern_letter:
            for i in 'abcdef':
                if len(c)==1 and i=='a': continue
                for j in 'abcdef':
                    if len(d)==1 and j=='a': continue
                    #print a,b,c,d,i,j
                    collector=[]
                    pattern = a+c.replace('f',i)+b+d.replace('f',j)
                    hunt(pattern)
                    if collector:
                        #print 'pattern',pattern,'c',c,'d',d,'i',i,'j',j
                        print collector
