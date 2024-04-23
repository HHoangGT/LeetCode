import numpy as np


# Problem 650 LeetCode
def can_place_flowers(flowerbed: list[int], n: int) -> bool:
    if n == 0:
        return True
    if len(flowerbed) == 1:
        return True if flowerbed[0] == (n - 1) else False
    for i in range(len(flowerbed)):
        if flowerbed[i] == 0:
            if i == 0:
                if flowerbed[i + 1] == 0:
                    flowerbed[i] = 1
                    n -= 1
            elif i == len(flowerbed) - 1:
                if flowerbed[i - 1] == 0:
                    flowerbed[i] = 1
                    n -= 1
            else:
                if flowerbed[i + 1] == 0 and flowerbed[i - 1] == 0:
                    flowerbed[i] = 1
                    n -= 1
            if n == 0:
                return True
    return False


# Problem 345 LeetCode
def reverseVowels(s: str) -> str:
    word = list(s)
    vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
    start_ptr = 0
    end_ptr = len(s) - 1
    while start_ptr < end_ptr:
        while start_ptr < end_ptr and word[start_ptr] not in vowels:
            start_ptr += 1
        while start_ptr < end_ptr and word[end_ptr] not in vowels:
            end_ptr -= 1
        word[start_ptr], word[end_ptr] = word[end_ptr], word[start_ptr]
        start_ptr += 1
        end_ptr -= 1
    return ''.join(word)


# Problem 151 LeetCode
def reverseWords(s: str) -> str:
    words = s.split()
    words.reverse()
    return " ".join(map(str, words))


# Problem 238 LeetCode
def product_with_reduce(lst: list[int]) -> int:
    return np.prod(lst)


def remove_list_element(lst: list[int], index: int) -> list[int]:
    return lst[:index] + lst[index+1:]


def productExceptSelf(nums: list[int]) -> list[int]:
    # first method
    # return [product_with_reduce(remove_list_element(nums, index=i)) for i in range(len(nums))]

    # second method
    prod = 1
    zero_count = 0

    for num in nums:
        if num == 0:
            zero_count += 1
        else:
            prod *= num

    if zero_count == 0:
        return [int(prod/num) for num in nums]
    elif zero_count == 1:
        return [0 if num != 0 else prod for num in nums]
    else:
        return [0 for num in nums]


if __name__ == '__main__':
    nums = [-1, 1, 0, -3, 3]
    print(productExceptSelf(nums=nums))
