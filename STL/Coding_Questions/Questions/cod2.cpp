/* Question 2 : n a financial system, you receive a stream of transaction IDs. Some IDs repeat because of retries or reversals. Write a function that finds the first transaction ID that appears exactly once in the stream.
Input: 
std::vector<std::string> transactions = {"TX101", "TX102", "TX101", "TX103", "TX102"}
Output: "TX103"
Constraint: You must solve this in O(n) time