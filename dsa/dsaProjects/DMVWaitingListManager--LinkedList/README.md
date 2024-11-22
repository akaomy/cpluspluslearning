# Project: dmv waiting list manager

## Learning approach: Problem-driven discovery, project based.

## Main functionality:
V1.0

- Add person at the end of the regular line
- Add person to the list at the beginning of the line (for disabled people)
- Add a person at certain position (if there is already a disabled person in line for disabled people, and another person at the end of this list, but before the regular line starts)

- Remove at the beginning, any position, and at the end

- Display the current list

- Search person in the list

- Find number of people in the line

- Get the total number of people in the lane

V1.2
- Add saving / loading data to / from a list when program restarts

## Requirements:
- Custom linked list (no reliance upon STL list)
- Each node in the list has name (like id):and time of registration

### Implement core member functions UML
- addPerson(string name): return
- removePerson(string name); return
- displayWaitlist(): return map of people with {id: name}  
- findPerson(string name): position in the list (index)  
- findPosition(int index): return name

### UML
Node Person:
- name: string
- registrationTime: string
- next: Node*

+Node (name: string, time: string)  
+getName(): string  
+getTime(): string  
+setNext(Node*): void


Linked List - DMVWaitingListManager
- head: Node*
- tail: Node*
- size: int

+addPersonAtPosition(name: string, index: int): void  
+addPersonToTheEnd(name: string): void  
+removePersonAtPosition(index: int): void  
+removePersonFromEnd(name: string): int  
+displayWaitlist(): map<int, string>  
+findPerson(name: string): int  
+findPosition(index: int): string

