def sortedSquaredArray(array):
    lists = []
    for i in array:
        lists.append(i * i)
    
    lists.sort()
    return lists

print(sortedSquaredArray([-2, -1]))