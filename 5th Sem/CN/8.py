# Computer Networks
# Implement Bit Stuffing.

def bit_stuffing(data):
    count = 0
    i = 0
    while i < len(data):
        if data[i] == '1':
            count += 1
        else:
            count = 0
        if count == 5:
            data = data[:i+1] + '0' + data[i+1:]
            count = 0
            i += 1 
        i += 1
    return data

# Test 1 
print("Test 1")
data = '111110101010101'
print("Original data: ", data)
stuffed_data = bit_stuffing(data)
print("Stuffed data: ", stuffed_data)

print('\n')

# Test 2
print("Test 2")
data = '111110101010101111110101010101'
print("Original data: ", data)
stuffed_data = bit_stuffing(data)
print("Stuffed data: ", stuffed_data)


