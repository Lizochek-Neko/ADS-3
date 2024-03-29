// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int i = 0, j = size - 1;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] == value) {
            int count = 0;
            while (mid >= 0 && arr[mid] == value) {
                mid--;
            }
            mid++;
            while (mid < size && arr[mid] == value) {
                count++;
                mid++;
            }
            return count;
        }
        else if (arr[mid] > value)
            j = mid;
        else
            i = mid + 1;
    }
    return 0;
}
