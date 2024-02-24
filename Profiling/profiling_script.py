from os import getpid     # IMPORT THESE TWO FUNCTIONS
from time import sleep    #
import re

from lr_1 import score as lr_1_score
from lr_5 import score as lr_5_score
from lr_10 import score as lr_10_score
from linear_svc_1 import score as linear_svc_1_score
from linear_svc_5 import score as linear_svc_5_score
from linear_svc_10 import score as linear_svc_10_score

# Define a function to preprocess a line by inserting spaces between floats
def preprocess_line(line):
    # Regular expression to match scientific notation numbers
    pattern = r'-?\d+\.\d+e[+-]?\d+'
    # Find all matches and return them as a list of strings
    numbers_str = re.findall(pattern, line)
    return numbers_str

def main():
    # Load the array from the text file, with preprocessing for each line
    scaled_X_test_20 = []
    with open('Profiling/scaled_X_test_20', 'r') as file:
        for line in file:
            preprocessed_line = preprocess_line(line)
            # Convert each found number to float and append to the list
            scaled_X_test_20.append([float(num) for num in preprocessed_line])
    
    with open('Profiling\y_test_20', 'r') as file:
        y_test_20 = [float(line) for line in file]

    # SAVE PID TO TEXT FILE
    pid = getpid()
    open("pid.txt", 'w').write(str(pid))

    # Run your code
    while True:
        pid = getpid()
        for row in scaled_X_test_20:
            print(linear_svc_1_score(row))
        sleep(3)

main()