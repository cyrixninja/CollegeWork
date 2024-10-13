# Computer Networks
# Implement error detection methods using CRC (Cyclic Redundancy Check)

def crc(data, divisor):
    n = len(divisor)
    data = list(data)
    for i in range(n - 1):
        data.append('0')
    data = ''.join(data)
    data = list(data)
    for i in range(len(data) - n + 1):
        if data[i] == '1':
            for j in range(n):
                data[i + j] = str(int(data[i + j]) ^ int(divisor[j]))
    return ''.join(data)

# Test 1
print("Test 1")
data = '1101011011'
divisor = '1011'
print("Original data: ", data)
print("Divisor: ", divisor)
remainder = crc(data, divisor)
print("Remainder: ", remainder)

print('\n')

# Test 2
print("Test 2")
data = '1101011011'
divisor = '1101'
print("Original data: ", data)
print("Divisor: ", divisor)
remainder = crc(data, divisor)
print("Remainder: ", remainder)
