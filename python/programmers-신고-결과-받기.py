def solution(id_list, report, k):
    report_dic = {id: 0 for id in id_list}
    mail_dic = {id: 0 for id in id_list}
    
    for r in set(report):
        reportee = r.split()[1]
        report_dic[reportee] += 1
    
    for r in set(report):
        reporter, reportee = r.split()
        if report_dic[reportee] >= k:
            mail_dic[reporter] += 1
    
    return list(mail_dic.values())