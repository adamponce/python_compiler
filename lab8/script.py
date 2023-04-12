import os
import subprocess

# Define the compiler command and arguments
compiler_command = "make"  # Replace with your compiler command
compiler_args = ["arg1", "arg2"]  # Replace with your compiler arguments

# Define the tests directory
tests_dir = "tests"  # Replace with your tests directory

# Define the output file
output_file = "compiler_output.txt"  # Replace with the name of the output file

# Open the output file in write mode
with open(output_file, "w") as f:
    # Loop through all the test files in the tests directory
    for test_file in os.listdir(tests_dir):
        # Construct the full path of the test file
        test_file_path = os.path.join(tests_dir, test_file)
        
        # Run the compiler on the current test file
        subprocess.run([compiler_command, test_file_path] + compiler_args, stdout=f, stderr=subprocess.STDOUT)

# Close the output file

# Read the output file
with open(output_file, "r") as f:
    output = f.read()

# Examine the output for problems
if "Error" in output or "Failed" in output:
    print("There were problems with the compiler output:")
    print(output)
else:
    print("Compiler output looks good!")
