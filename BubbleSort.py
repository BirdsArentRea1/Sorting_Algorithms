Bubble_Sort = [3, 4, 1, 0]

for j in range(5):
    for i in range(3):
        if Bubble_Sort[i] > Bubble_Sort[i + 1]:
            Bubble_Sort[i], Bubble_Sort[i + 1] = Bubble_Sort[i + 1], Bubble_Sort[i]

for i in range(4):
    print(Bubble_Sort[i], end=" ")
