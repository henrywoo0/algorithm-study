def solution(babbling):
    count = 0
    
    for word in babbling:
        for able_word in ['aya', 'ye', 'woo', 'ma']:
            if able_word * 2 not in word:
                word = word.replace(able_word, ' ')
        if len(word.strip()) == 0:
            count += 1
    
    return count