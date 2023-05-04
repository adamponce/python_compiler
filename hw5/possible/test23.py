def test_concatenate_strings():
    input1 = "Hello"
    input2 = "world"
    expected_output = "Helloworld"
    output = ""
    for char in input1:
        output += char
    for char in input2:
        output += char
    if output == expected_output:
        print("test_concatenate_strings PASSED")
    else:
        print("test_concatenate_strings FAILED: " + output + " != " + expected_output)

def test_get_string_length():
    input_str = "Hello, world!"
    expected_output = 13
    output = 0
    for char in input_str:
        output += 1
    if output == expected_output:
        print("test_get_string_length PASSED")
    else:
        print("test_get_string_length FAILED: " + str(output) + " != " + str(expected_output))

def run_tests():
    test_concatenate_strings()
    test_get_string_length()

if __name__ == '__main__':
    run_tests()
