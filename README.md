# 🏆 UEFA Champions League Winners

A simple **C++ console application** that displays UEFA Champions League winners and final match information for each year from **2000 to 2026**.

The project demonstrates basic **Object-Oriented Programming (OOP)** concepts in C++, including **inheritance, polymorphism, abstract classes, constructors, virtual functions, and vectors**.

## 📌 Features

* View the Champions League winner for a specific year.
* Display the final opponent and score.
* Support for finals decided by penalties.
* Covers Champions League finals from **2000 to 2026**.
* Simple and interactive command-line interface.
* Enter `1` to exit the program.

## 🛠️ Technologies

* **C++**
* `iostream`
* `vector`
* `string`

## 🧠 OOP Concepts Used

### Abstract Base Class — `LCWinner`

The `LCWinner` class stores common information about every winner:

* Team name
* Year

It also contains the pure virtual function:

```cpp
virtual void print_info() const = 0;
```

This makes `LCWinner` an **abstract class**.

### `FinalMatch`

`FinalMatch` inherits from `LCWinner` and represents a final that was decided during normal/extra time.

It stores:

* Opponent
* Final score

### `Penalty`

`Penalty` also inherits from `LCWinner` and represents a final that was decided by a penalty shootout.

It stores:

* Opponent
* Main match score
* Penalty shootout score

### Polymorphism

The program stores different objects inside:

```cpp
std::vector<LCWinner*> history;
```

Because `print_info()` is virtual, the correct implementation is called depending on the actual object type:

```cpp
history[i]->print_info();
```

This demonstrates **runtime polymorphism**.

## ▶️ How to Run

Compile the program with a C++ compiler:

```bash
g++ main.cpp -o champions_league
```

Run it:

```bash
./champions_league
```

## 💻 Example

```text
=== WELCOME UEFA CHAMPIONS LEAGUE ===

Plaese enter the year (press 1 to exit)

2018

----------------------------------
----------------------------------

Real Madrid CHAMPION!!!
Real Madrid 3-1 Liverpool

----------------------------------
----------------------------------
```

For a penalty final:

```text
2026

------------------------------------
------------------------------------

Paris-Saint-Germain CHAMPION!!!
Paris-Saint-Germain 1-1 (4-3) Arsenal

------------------------------------
------------------------------------
```

## 📅 Available Years

The program currently contains Champions League final information for:

**2000 — 2026**

Enter any year in this range to display the corresponding winner and final result.

## 🚀 Future Improvements

Possible improvements for the project:

* Add a search by team name.
* Display all winners at once.
* Count how many times each team won.
* Add a menu with multiple options.
* Replace raw pointers with smart pointers.
* Store the data in a separate file.
* Add more detailed final information.

## 👨‍💻 Project

This project was created as a practice project for learning **C++ and Object-Oriented Programming**.

---

⭐ If you find this project useful, feel free to star the repository!
