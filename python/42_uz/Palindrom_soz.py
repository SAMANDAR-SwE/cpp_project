def isPalindrome(string: str) -> bool:
    palin = string[::-1]
    if string == palin:
        return True
    else:
        return False
    
    
print(isPalindrome("abb"))