
n_son = int(input())
nubres = []
nubres = list(map(int, input().split()))
k_son = int(input())
masss = max(nubres)
max_index = nubres.index(masss)
k_son_num = 0
for i in range(n_son):
    if i == k_son:
        k_son_num = nubres[i - 1]

        nubres[i-1] = masss
    

nubres[max_index] = k_son_num
  



print(nubres)
