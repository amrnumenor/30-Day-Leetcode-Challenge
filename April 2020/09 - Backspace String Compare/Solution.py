class Solution:
    def backspaceCompare(self, S: str, T: str) -> bool:
        def Build(S):
            ans = []
            for c in S:
                if c != "#":
                    ans.append(c)
                elif ans:
                    ans.pop()
            return "".join(ans)
        return Build(S) == Build(T)