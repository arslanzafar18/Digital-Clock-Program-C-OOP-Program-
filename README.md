# ⏰ Digital Clock Program (C++ OOP Project)

This is a simple **Digital Clock Console Application** built using **Object-Oriented Programming (OOP) concepts in C++**.
It takes the current time and day as input from the user and then continuously displays a **real-time digital clock** that updates every second.

---

## 📖 Features

* Displays a decorated **intro screen** with ASCII art, project title, group members, and institute name.
* User inputs:

  * Current **Hour (0–23)**
  * Current **Minute (0–59)**
  * Current **Second (0–59)**
  * Current **Day (1–7, Monday–Sunday)**
* Automatically increments:

  * Seconds → Minutes → Hours → Days.
* Tracks day of the week and loops after Sunday → Monday.
* Console screen is refreshed every second with updated time.
* Colorful ASCII banners for a digital clock feel.

---

## 🏗️ Classes Used

The project demonstrates **OOP concepts**:

* `Introduction` → Displays project introduction screen.
* `Hours`, `Minutes`, `Seconds` → Separate classes for time components.
* `Day` → Handles day of the week input and display.
* `Clock` → Inherits from all above classes and manages the actual clock logic (`displayClock()`, `runClock()`).

---

## ⚙️ Requirements

* **C++ Compiler** (GCC, MSVC, MinGW, etc.)
* **Windows OS** (uses `<windows.h>` for `Sleep()` and `system("color")`).

> ⚠️ On Linux/Mac, you’ll need to replace `Sleep()` with `usleep()` and remove `system("color")`.

---

## ▶️ How to Run

1. Clone this repository:

   ```bash
   git clone https://github.com/your-username/digital-clock-cpp.git
   cd digital-clock-cpp
   ```
2. Compile the program:

   ```bash
   g++ digital_clock.cpp -o digital_clock
   ```
3. Run it:

   ```bash
   digital_clock.exe
   ```

---

## 📸 Example Output

```
                             DIGITAL CLOCK PROGRAM

Enter current hour: 10
Enter current minute: 25
Enter current second: 45
Enter the current Day
1 for Monday … 7 for Sunday

                         10   :   25   :   45
                               DAY: TUESDAY
```

Clock then updates every second ⏱️

---

## 📜 License

This project is open-source. You are free to modify and use it for learning purposes.
