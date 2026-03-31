SELECT e.name as Employee
FROM Employee e
JOIN Employee NQL On NQL.id = e.managerId
WHERE e.salary > NQL.salary