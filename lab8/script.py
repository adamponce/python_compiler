import os
import subprocess

compiler_command = "./puny"  

tests_dir = "tests/errors" 
tests_dir_two = "tests/puny"
tests_dir_three = "tests/python"

output_file_errors = "compiler_output_errors.txt" 

# Open the output file in write mode
with open(output_file_errors, "w") as f:
    for test_file in os.listdir(tests_dir):
        test_file_path = os.path.join(tests_dir, test_file)
        # Run the compiler on the current test file
        subprocess.run([compiler_command, test_file_path], stdout=f, stderr=subprocess.STDOUT)

output_file_puny = "compiler_output_puny.txt" 

with open(output_file_puny, "w") as f:
    # Loop through all the test files in the tests directory
    for test_file in os.listdir(tests_dir_two):
        test_file_path = os.path.join(tests_dir_two, test_file)
        subprocess.run([compiler_command, test_file_path], stdout=f, stderr=subprocess.STDOUT)

output_file_python = "compiler_output_python.txt" 

with open(output_file_python, "w") as f:
    for test_file in os.listdir(tests_dir_three):
        test_file_path = os.path.join(tests_dir_three, test_file)
        subprocess.run([compiler_command, test_file_path], stdout=f, stderr=subprocess.STDOUT)

