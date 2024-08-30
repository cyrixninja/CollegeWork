# Implementation of Rabin-Karp Algorithm for Pattern Searching.

def rabin_karp_matcher(text, patternm, d , q):
    n = len(text)
    m = len(pattern)
    h = pow(d, m-1) % q
    p = 0
    t = 0
    result = []
    for i in range(m): # preprocessing
        p = (d*p + ord(pattern[i])) % q
        t = (d*t + ord(text[i])) % q
    for s in range(n-m+1): # note the +1
        if p == t: # check character by character
            match = True
            for i in range(m):
                if pattern[i] != text[s+i]:
                    match = False
                    break
            if match:
                result = result + [s]
        if s < n-m:
            t = (t-h*ord(text[s])) % q # remove letter s
            t = (t*d + ord(text[s+m])) % q # add letter s+m
            t = (t+q) % q 
    return result

text = "Hello World"
pattern = "World"
d = 256
q = 101

print(rabin_karp_matcher(text, pattern, d, q))
