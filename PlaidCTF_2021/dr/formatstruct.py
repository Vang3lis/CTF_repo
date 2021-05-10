#!/usr/bin/python

pairing = {
    '(': ')',
    '[': ']',
    '{': '}',
    '<': '>',
}
ipairing = {j:i for i,j in pairing.items()}

skip_match = '\'"'

split = ' '

max_linelen = 40

indent_w = 4

def do_format_text(s):
    if len(s)<max_linelen:
        return [s]
    #print 'subcut',s,len(s),max_linelen
    stack = []
    # stack depth
    depth = []
    mindepth = -1
    splitpoints = []
    last_mindepth = -1
    for h,i in enumerate(s):
        if stack and stack[-1] in skip_match:
            if i == stack[-1]:
                stack.pop()
        else:
            if i in pairing:
                stack.append(i)
            elif i in ipairing:
                if not stack:
                    print 'bad string',s
                stack.pop()
            elif i in split:
                # we do not split in quotes
                splitpoints.append(h)
                if mindepth==-1 or mindepth>len(stack):
                    mindepth=len(stack)
        if len(stack)==mindepth:
            last_mindepth = h
        depth.append(len(stack))
    if mindepth == -1:
        return [s]
    actual_splitpoints = sorted([i for i in splitpoints if depth[i]==mindepth]+[depth.index(mindepth)+1,last_mindepth+1])
    payload = []
    for h,i in enumerate(actual_splitpoints):
        if h==0:
            start = 0
        else:
            start = actual_splitpoints[h-1]
        payload.append(s[start:i].strip())
    if actual_splitpoints[-1]<len(s):
        payload.append(s[actual_splitpoints[-1]:].strip())
    payload = [i for i in payload if i]
    real_payload = [do_format_text(i) for i in payload]
    ret = []
    ret += real_payload[0]
    if len(real_payload)!=1:
        ret+=[('indent',1)]
        for i in real_payload[1:-1]:
            ret+=i
        ret+=[('indent',-1)]
        ret += real_payload[-1]
    return ret

def format_text(s):
    l = do_format_text(s)
    ind = 0
    pl = []
    for i in l:
        if isinstance(i,tuple):
            ind+=i[1]
        else:
            pl.append(' '*indent_w*ind+i)
    return '\n'.join(pl)


import sys
with open(sys.argv[1],'r') as f:
    s = f.read()
with open(sys.argv[1]+'.f.txt','w') as f:
    f.write(format_text(s))
