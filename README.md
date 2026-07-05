# QuickServe-QR-Based-Restaurant-Ordering-System
QR-based restaurant ordering and billing system built with C, Python, and HTML.

# QuickServe - QR-Based Restaurant Ordering & Billing System

QuickServe is a restaurant ordering and billing system developed using **C**, **Python**, and **HTML**. The project allows customers to browse a digital menu using a QR code, place food orders through a menu-driven interface, modify their orders, and generate a final bill automatically.

This project was built to demonstrate concepts such as modular programming, file organization, customer interaction, billing logic, and QR code integration.

---

## Features

-  Customer registration
-  Interactive food ordering system
-  Modify or update orders before confirmation
-  Automatic bill generation
-  QR code generation for accessing the digital menu
-  HTML-based digital menu
---

## Tech Stack

- **C** – Core application logic
- **Python** – QR code generation
- **HTML** – Digital restaurant menu

---

## Project Structure

```
QuickServe
│
├── userdetailsfinal.c        # Main program and customer details
├── orderdetails.c            # Ordering and billing logic
├── NEWMENU.html              # Digital restaurant menu
├── menuqrcode.py             # QR code generator
├── google_drive_qr_code.png  # Generated QR code
└── README.md
```

---

## WorkFlow

1. The customer enters their name.
2. The menu is displayed with available food items.
3. The customer selects one or more items and specifies quantities.
4. Orders can be modified before confirmation.
5. The system automatically calculates the total bill.
6. A QR code allows customers to access the digital menu on their mobile device.

---


### Requirements

- GCC Compiler
- Python 3.x
- `qrcode` Python package

Install the required Python package:

```bash
pip install qrcode[pil]
```

---

### Compile the C Program

```bash
gcc userdetailsfinal.c orderdetails.c -o QuickServe
```

Run the application:

```bash
./QuickServe
```

For Windows:

```bash
QuickServe.exe
```

---

### Generate the QR Code

Run:

```bash
python menuqrcode.py
```

A QR code image will be generated that links to the digital menu.

---

##  Future Enhancements

- React-based customer interface
- Node.js and Express backend
- MySQL database integration
- User authentication
- Admin dashboard
- Online payment integration
- Order history
- Live kitchen order tracking
- AI-powered dish recommendations
- Sales analytics dashboard

---
