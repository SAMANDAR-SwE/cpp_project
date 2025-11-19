def bestSeat(seats):
    indexs = []
    for i in seats:
        if i == 0 :
            indexs.append(seats.index(i))

    return indexs
print(bestSeat([1, 0, 1, 0, 0, 0, 1]))