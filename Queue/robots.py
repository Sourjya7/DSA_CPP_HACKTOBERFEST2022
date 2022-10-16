/*
Maximum Number of Robots Within Budget

You have n robots. You are given two 0-indexed integer arrays, chargeTimes and runningCosts, both of length n. The ith robot costs chargeTimes[i] units to charge and costs runningCosts[i] units to run. You are also given an integer budget.

The total cost of running k chosen robots is equal to max(chargeTimes) + k * sum(runningCosts), where max(chargeTimes) is the largest charge cost among the k robots and sum(runningCosts) is the sum of running costs among the k robots.

Return the maximum number of consecutive robots you can run such that the total cost does not exceed budget.
*/

def maximumRobots(self, times: List[int], costs: List[int], budget: int) -> int:
   cur = i = 0
   n = len(times)
   s = SortedList()
   for j in range(n):
       cur += costs[j]
       s.add(times[j])
       if s[-1] + (j - i + 1) * cur > budget:
           s.remove(times[i])
           cur -= costs[i]
           i += 1
   return n - i
