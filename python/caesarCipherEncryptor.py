def caesarCipherEncryptor(string, key):
    key = key % 26
    result = ''
    for char in string:
        new_code = ord(char) + key
        if new_code > ord("z"):
            new_code = ord("a") + ( new_code - ord("z") ) - 1
        result += chr(new_code)
    return result
        
print(caesarCipherEncryptor("xyz", 2))

