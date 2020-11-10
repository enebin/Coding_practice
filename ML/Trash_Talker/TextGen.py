# !pip install -q tensorflow-gpu==2.0.0
import tensorflow as tf
import numpy as np
import os
import time
import re

# 구글 코랩에서 실행할 경우 언코멘트 할 것
'''
from google.colab import drive
drive.mount('/content/drive')
text = open('/content/drive/My Drive/Colab Notebooks/text/genesis.txt', 'r').read()
'''

# 한글을 자모 단위로 쪼개기 or 붙이기
# https://rachelsdotcom.tistory.com/79
# -*- coding: utf-8 -*-
# 초성 리스트. 0 ~ 18
CHOSUNG_LIST = ['ㄱ', 'ㄲ', 'ㄴ', 'ㄷ', 'ㄸ', 'ㄹ', 'ㅁ', 'ㅂ', 'ㅃ', 'ㅅ', 'ㅆ', 'ㅇ', 'ㅈ', 'ㅉ', 'ㅊ', 'ㅋ', 'ㅌ', 'ㅍ', 'ㅎ']

# 중성 리스트. 0 ~ 20
JUNGSUNG_LIST = ['ㅏ', 'ㅐ', 'ㅑ', 'ㅒ', 'ㅓ', 'ㅔ', 'ㅕ', 'ㅖ', 'ㅗ', 'ㅘ', 'ㅙ', 'ㅚ', 'ㅛ', 'ㅜ', 'ㅝ', 'ㅞ', 'ㅟ', 'ㅠ', 'ㅡ', 'ㅢ',
                 'ㅣ']

# 종성 리스트. 0 ~ 27 + 1(1개 없음)
JONGSUNG_LIST = [' ', 'ㄱ', 'ㄲ', 'ㄳ', 'ㄴ', 'ㄵ', 'ㄶ', 'ㄷ', 'ㄹ', 'ㄺ', 'ㄻ', 'ㄼ', 'ㄽ', 'ㄾ', 'ㄿ', 'ㅀ', 'ㅁ', 'ㅂ', 'ㅄ', 'ㅅ',
                 'ㅆ', 'ㅇ', 'ㅈ', 'ㅊ', 'ㅋ', 'ㅌ', 'ㅍ', 'ㅎ']


def seperator(string):
    # 유니코드 한글 시작 : 44032, 끝 : 55199
    BASE_CODE, CHOSUNG, JUNGSUNG = 44032, 588, 28


    sp_list = list(string)  # string make list
    result = []
    for keyword in sp_list:
        # 한글 여부 check 후 분리
        if (re.match('.*[ㄱ-ㅎㅏ-ㅣ가-힣]+.*', keyword) is not None):

            # 초성
            char_code = ord(keyword) - BASE_CODE
            char1 = int(char_code / CHOSUNG)
            result.append(CHOSUNG_LIST[char1])

            # 중성
            char2 = int((char_code - (CHOSUNG * char1)) / JUNGSUNG)
            result.append(JUNGSUNG_LIST[char2])

            # 종성
            char3 = int((char_code - (CHOSUNG * char1) - (JUNGSUNG * char2)))
            if char3 == 0:
                pass
            else:
                result.append(JONGSUNG_LIST[char3])

        elif (keyword == ' ') or (keyword == '\n') or (keyword == ".") or (keyword == ","):
            result.append(keyword)

        else:
            pass

    output = "".join(result)
    return output  # 자소 분리 결과 출력


# https://gigglehd.com/zbxe/14052329
def hangeulJoin(inputlist):
    result = ""
    cho, jung, jong = 0, 0, 0
    inputlist.insert(0, "")
    while len(inputlist) > 1:
        if inputlist[-1] in JONGSUNG_LIST:
            if inputlist[-2] in JUNGSUNG_LIST:
                jong = JONGSUNG_LIST.index(inputlist.pop())
            else:
                result += inputlist.pop()
        elif inputlist[-1] in JUNGSUNG_LIST:
            if inputlist[-2] in CHOSUNG_LIST:
                jung = JUNGSUNG_LIST.index(inputlist.pop())
                cho = CHOSUNG_LIST.index(inputlist.pop())
                result += chr(0xAC00 + ((cho * 21) + jung) * 28 + jong)
                cho, jung, jong = 0, 0, 0
            else:
                result += inputlist.pop()
        else:
            result += inputlist.pop()
    else:
        return result[::-1]


def aggregator(inputtext):
    """입력된 문장에 있는 모든 풀어쓰기된 한글을 모아쓰기로 바꾼다."""
    t1 = []
    for i in inputtext:
        t1.append(i)
    return hangeulJoin(t1)


string = seperator("안녕하세여!")
print(string)
print(aggregator(string))
