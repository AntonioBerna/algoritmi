import matplotlib.animation as animation
import matplotlib.pyplot as plt
from tkinter import messagebox
from sort import Algorithms
import tkinter as tk
import random
import time


class Window(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Sorting Algorithms - Clever Code")
        # self.resizable(False, False)

        self.frame = tk.Frame()
        self.frame.pack()
        self.n_label = tk.Label(self.frame, text="n:", font=("Cascadia Code", "15"))
        self.n_label.grid(row=0, column=0, padx=10, pady=10)
        self.n_entry = tk.Entry(self.frame, justify="center", font=("Cascadia Code", "15"))
        self.n_entry.grid(row=0, column=1, padx=10, sticky="E")

        self.sort_frame = tk.Frame()
        self.sort_frame.pack()
        self.radio_value = tk.IntVar()
        self.radio_value.set(-1)
        self.bubble_sort = tk.Radiobutton(self.sort_frame, text="BubbleSort", variable=self.radio_value, value=0)
        self.bubble_sort.grid(row=0, column=0, padx=10, sticky="W")
        self.insertion_sort = tk.Radiobutton(self.sort_frame, text="InsertionSort", variable=self.radio_value, value=1)
        self.insertion_sort.grid(row=0, column=1, padx=10, sticky="W")
        self.merge_sort = tk.Radiobutton(self.sort_frame, text="MergeSort", variable=self.radio_value, value=2)
        self.merge_sort.grid(row=1, column=0, padx=10, sticky="W")
        self.quick_sort = tk.Radiobutton(self.sort_frame, text="QuickSort", variable=self.radio_value, value=3)
        self.quick_sort.grid(row=1, column=1, padx=10, sticky="W")
        self.selection_sort = tk.Radiobutton(self.sort_frame, text="SelectionSort", variable=self.radio_value, value=4)
        self.selection_sort.grid(row=2, columnspan=2, padx=10)

        self.button_frame = tk.Frame()
        self.button_frame.pack()
        self.reset_button = tk.Button(self.button_frame, text="Reset", font=("Cascadia Code", "15"), command=self.resetWindow)
        self.reset_button.grid(row=0, column=0, padx=10, pady=10, sticky="WE")
        self.start_button = tk.Button(self.button_frame, text="Start", font=("Cascadia Code", "15"), command=self.setAlgorithm)
        self.start_button.grid(row=0, column=1, padx=10, pady=10, sticky="WE")
    
    def resetWindow(self):
        self.n_entry.delete(0, tk.END)
        self.radio_value.set(-1)
    
    def __checkAll(self):
        try:
            if self.radio_value.get() in [i for i in range(0, 5)] and int(self.n_entry.get()):
                return True
        except ValueError:
            return False

    def setAlgorithm(self):
        if self.__checkAll():
            N = int(self.n_entry.get())
            A = [x + 1 for x in range(N)]
            random.seed(time.time())
            random.shuffle(A)

            algo = Algorithms()
            if self.radio_value.get() == 0:
                self.title = "BubbleSort"
                self.generator = algo.bubblesort(A)
            elif self.radio_value.get() == 1:
                self.title = "InsertionSort"
                self.generator = algo.insertionsort(A)
            elif self.radio_value.get() == 2:
                self.title = "MergeSort"
                self.generator = algo.mergesort(A, 0, N - 1)
            elif self.radio_value.get() == 3:
                self.title = "QuickSort"
                self.generator = algo.quicksort(A, 0, N - 1)
            else:
                self.title = "SelectionSort"
                self.generator = algo.selectionsort(A)

            self.showFigure(A, N)
        else:
            messagebox.showerror("Si è verificato un errore", "Valori Inseriti Non Validi!")
    
    def updateFigure(self, A, rects, iteration):
        for rect, val in zip(rects, A):
            rect.set_height(val)
        iteration[0] += 1
        self.text.set_text("# of Operations: {}".format(iteration[0]))

    def showFigure(self, A, N):
        fig, ax = plt.subplots()
        ax.set_title(self.title)
        bar_rects = ax.bar(range(len(A)), A, align="edge")
        ax.set_xlim(0, N)
        ax.set_ylim(0, int(1.07 * N))
        self.text = ax.text(0.02, 0.95, "", transform=ax.transAxes)

        iteration = [0]
        anim = animation.FuncAnimation(fig, func=self.updateFigure, fargs=(bar_rects, iteration), frames=self.generator, interval=1, repeat=False)
        plt.show()

if __name__ == "__main__":
    window = Window()
    window.mainloop()