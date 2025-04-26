# 🖨️ ft_printf

A custom implementation of the `printf` function in C, developed as part of the 42 school curriculum.

> 💡 Project by [devjorginho](https://github.com/devjorginho)  
> 🏫 School: 42 Lisboa

---

## 📌 Overview

The goal of this project is to recreate the behavior of the standard C `printf` function, using only the allowed functions and following the strict norms of the 42 school.

`ft_printf` formats and prints a string to the standard output, replacing format specifiers with provided arguments.

---

## ⚙️ Supported Format Specifiers

| Specifier | Description                            |
|-----------|----------------------------------------|
| `%c`      | Prints a single character              |
| `%s`      | Prints a string                        |
| `%p`      | Prints a memory address (pointer)      |
| `%d`      | Prints a signed decimal integer        |
| `%i`      | Same as `%d`                           |
| `%u`      | Prints an unsigned decimal integer     |
| `%x`      | Prints a number in lowercase hexadecimal |
| `%X`      | Prints a number in uppercase hexadecimal |
| `%%`      | Prints a literal `%` character         |

---

## 🧠 How It Works

The function follows these steps:

1. Parses the format string.
2. Identifies format specifiers (`%`).
3. Replaces each specifier with the correct value.
4. Outputs the result using `write`.
5. Returns the total number of characters printed.

---

## 🛠️ Compilation

Use `make` to compile the project and generate the static library:

```bash
make test
```

## 🧪 Example Usage
```
#include "ft_printf.h"

int main(void)
{
	int count = ft_printf("Hello, %s! Number: %d
", "Jorginho", 42);
	ft_printf("Printed characters: %d
", count);
	return (0);
}
```


---

## ✅ Project Rules

- ❌ Not allowed to use the original `printf`.
- ❌ No dynamic memory allocation unless strictly necessary.
- ✅ Must use variadic functions: `va_start`, `va_arg`, `va_end`.
- ✅ Only `write` is allowed for output.
- ✅ Only one public function: `ft_printf`.

---

## 📁 Project Structure

- `ft_printf.c` — Main function logic
- `allformats.c` — Helper functions (e.g., `putchar`, `strlen`, `itoa`)
---

## 🚀 Status

✅ Fully implemented  
✅ Passed all official 42 test cases  
✅ Compatible with community testers like [Tripouille's Printf Tester](https://github.com/Tripouille/printfTester)

---

## 📜 License

This is an educational project developed at [42 Lisboa](https://42lisboa.com).  
Feel free to use and adapt for learning purposes.  

~ constantly climbing 🚀 .

---
