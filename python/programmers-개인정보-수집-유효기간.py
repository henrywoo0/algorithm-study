def date_to_day(date):
    year, month, day = map(int, date.split("."))
    return (year * 12 * 28) + (month * 28) + day

def solution(today, terms, privacies):
    answer = []
    
    term_dic = {t[0]: int(t[2:]) * 28 for t in terms}
        
    today = date_to_day(today)
    
    for i, privacy in enumerate(privacies):
        day, term = privacy.split(" ")
        if date_to_day(day) + term_dic[term] <= today:
            answer.append(i + 1)
    
    return answer