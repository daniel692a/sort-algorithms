def bubble_sort(list):
    length = len(list)
    for i in range(length):
        swapped = False
        for j in range(length-i-1):
            if list[j] > list[j+1]:
                list[j], list[j+1] = list[j+1], list[j]
                swapped = True
    print(list)



if __name__ == '__main__':
    array = [64, 34, 25, 12, 22, 11, 90]
    bubble_sort(array)
