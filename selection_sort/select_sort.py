def select_sort(l):
    length = len(l)
    for i in range(length):
        min_index = i
        for j in range(i+1, length):
            if(l[j]<l[min_index]):
                min_index=j
        l[i], l[min_index] = l[min_index], l[i]
    return l


if __name__ == '__main__':
    array = [60, 80, 95, 50, 70]
    print(select_sort(array))
