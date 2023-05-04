# test_utils.py

def test_reverse_list():
    input_list = [1, 2, 3, 4]
    expected_output = [4, 3, 2, 1]
    output = input_list[::-1]
    if output == expected_output:
        print("test_reverse_list PASSED")
    else:
        print("test_replace_string FAILED: " + output + " != " + expected_output)

def test_sort_list():
    input_list = [4, 1, 3, 2]
    expected_output = [1, 2, 3, 4]
    output = []
    for i in range(len(input_list)):
        min_value = input_list[0]
        min_index = 0
        for j in range(1, len(input_list)):
            if input_list[j] < min_value:
                min_value = input_list[j]
                min_index = j
        output.append(min_value)
        input_list.pop(min_index)
    if output == expected_output:
        print("test_sort_list PASSED")
    else:
        print("test_replace_string FAILED: " +output + " != " + expected_output)

def test_capitalize_string():
    input_string = "hello world"
    expected_output = "Hello world"
    output = input_string.capitalize()
    if output == expected_output:
        print("test_capitalize_string PASSED")
    else:
        print("test_replace_string FAILED: " +output + " != " + expected_output)

def test_replace_string():
    input_string = "hello world"
    expected_output = "goodbye world"
    output = input_string.replace("hello", "goodbye")
    if output == expected_output:
        print("test_replace_string PASSED")
    else:
        print("test_replace_string FAILED: " +output + " != " + expected_output)

def run_tests():
    test_reverse_list()
    test_sort_list()
    test_capitalize_string()
    test_replace_string()

def main():
    run_tests()
