def nonConstructibleChange(coins):
    coins.sort()
    current_change = 0

    for coin in coins:
        if coin > current_change + 1:
            return current_change + 1
        current_change += coin
    print(current_change)
    





print(nonConstructibleChange([5, 7, 1, 1, 2, 3, 22]))