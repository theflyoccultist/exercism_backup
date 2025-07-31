def find(search_list, value):
    def binary_search(left, right):
        if left > right:
            raise ValueError("value not in array")

        mid = (left + right) // 2
        mid_value = search_list[mid]

        if mid_value == value:
            return mid

        elif value < mid_value:
            return binary_search(left, mid - 1)

        else:
            return binary_search(mid + 1, right)

    return binary_search(0, len(search_list) - 1)