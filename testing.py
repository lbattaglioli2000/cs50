def selectionSort(array):
    for i in range(0, len(array) - 1):
        MIN = i
        for j in range(i + 1, len(array)):
            if array[j] < array[MIN]:
                MIN = j
        if MIN != i:
            temp = array[i]
            array[i] = array[i + 1]
            array[i + 1] = temp
    print(array)
def insertionSort(array):
    for i in range(1, len(array) - 1):
        element = array[i]
        j = 1
        while j > 0 and array[j - 1] > element:
            array[j] = array[j - 1]
            j = j - 1
        array[j] = element
    print(array)
 
numbers = [1,3,47,9,22,6347,46521]

selectionSort(numbers)
insertionSort(numbers)
