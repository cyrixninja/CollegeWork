# Computer Networks
# Implement error correction method using Hamming Code.

def hamming_code(data):
    n = len(data)
    for i in range(n):
        if 2**i >= n + i + 1:
            r = i
            break
    print("Number of redundant bits: ", r)
    data = list(data)
    j = 0
    for i in range(n + r):
        if i == 2**j - 1:
            data.insert(i, '0')
            j += 1
    print("Data after adding redundant bits: ", ''.join(data))
    for i in range(r):
        x = 2**i
        count = 0
        j = x - 1
        while j < n + r:
            for k in range(x):
                if j < n + r:
                    if data[j] == '1':
                        count += 1
                    j += 1
            j += x
        if count % 2 != 0:
            data[x - 1] = '1'
    print("Data after adding redundant bits: ", ''.join(data))
    return ''.join(data)

# Test 1
print("Test 1")
data = '1010101'
print("Original data: ", data)
encoded_data = hamming_code(data)
print("Encoded data: ", encoded_data)

print('\n')

# Test 2
print("Test 2")
data = '1101010111'
print("Original data: ", data)
encoded_data = hamming_code(data)
print("Encoded data: ", encoded_data)
