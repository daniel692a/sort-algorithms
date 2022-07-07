from typing import List

def insertion_sort(a: List[int]):
    i:int = 1
    j:int = 0
    key:int=0
    for i in range(1, len(a)):
        key = a[i]
        j=i-1
        while(j>=0 and a[j]>key):
            a[j+1] = a[j]
            j-=1
        a[j+1]=key

    print(a)

def main():
    a_in = [int(x) for x in input().split(' ')]
    insertion_sort(a_in)

if __name__ == "__main__":
    main()
