from math import floor

def solution(s):
    input_string = list(s)
    input_length = len(input_string)
    stride = 1
    counter = 1
    result = 0
    minimum = 1000

    for i in range(int(input_length / 2)):
        for j in range(floor(input_length / stride)):

            former = input_string[j * stride : j * stride + stride]
            latter = input_string[j * stride + stride : j * stride + stride * 2]

            if former == latter :
                counter += 1

            elif counter == 1 :
                result += stride

            else :
                result += len(str(counter)) + stride
                counter = 1

        if minimum > result + (input_length % stride):
            minimum = result + (input_length % stride)
        
        result = 0
        stride += 1 

    answer =  minimum
    return print(answer)


solution("abcdabcabca")