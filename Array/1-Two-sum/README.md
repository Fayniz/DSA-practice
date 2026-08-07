# Two Sum

## Problem

Given an array of integers and a target, find indices of two numbers
that add up to the target. Each input has exactly one solution.

## Approach 1: Brute Force

* Idea: check every possible pair using nested loops
* Time: O(n²), Space: O(1)
* Code: [brute\_force.py](brute_force.py)

## Approach 2: Hash Map

* Idea: store each number's index as we go; before storing, check if
the complement (target - current number) already exists in the map
* Time: O(n), Space: O(n)
* Code: [hashmap.py](hashmap.py)

## Notes / what I learned

* Time-space tradeoff: hash map trades memory for speed
* Hash map collisions: chaining vs open addressing
* Check-then-insert order matters (avoids matching an element with itself)

