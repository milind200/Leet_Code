class Solution(object):
    def interpret(self, command):
        st=""
        d={"G":"G","()":"o","(al)":"al"}
        for key,value in d.items():
            command=command.replace(key,value)
        return command    