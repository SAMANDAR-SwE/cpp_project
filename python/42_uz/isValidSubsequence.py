def isValidSubsequence(array, sequence):
    lists = []
    for arr in array:
        for sequ in sequence:
            if arr == sequ:
                lists.append(arr)
                print(arr, sequ)
    if lists == sequence:
        return True
    else:
        return False
    
print(isValidSubsequence(array = [5, 1, 22, 25, 6, -1, 8, 10],
sequence = [1, 6, -1, -1]))