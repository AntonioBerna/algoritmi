import matplotlib.animation as animation
import matplotlib.pyplot as plt
from sort import Algorithms
import random
import time


def main():
    while True:
        N = int(input("Enter number of integers: "))
        if N > 0:
            while True:
                try:
                    method = int(input("Enter sorting method:\n(1) BubbleSort\n(2) InsertionSort\n(3) MergeSort\n(4) QuickSort\n(5) SelectionSort\n(0) Exit\n> "))
                    if method in [i for i in range(0, 6)]:

                        # init random list A
                        A = [x + 1 for x in range(N)]
                        random.seed(time.time())
                        random.shuffle(A)

                        algo = Algorithms()
                        if method == 0:
                            print("Bye.")
                            exit()
                        elif method == 1:
                            title = "BubbleSort"
                            generator = algo.bubblesort(A)
                        elif method == 2:
                            title = "InsertionSort"
                            generator = algo.insertionsort(A)
                        elif method == 3:
                            title = "MergeSort"
                            generator = algo.mergesort(A, 0, N - 1)
                        elif method == 4:
                            title = "QuickSort"
                            generator = algo.quicksort(A, 0, N - 1)
                        elif method == 5:
                            title = "SelectionSort"
                            generator = algo.selectionsort(A)
                        
                        print(f"You selected {title}")
                        output(A, N, title, generator)
                        print("Bye.")
                        exit()
                    else:
                        print("You must enter a number between 0 and 5... Try Again!")
                except Exception as e:
                    print(f"Error: {e}... Try Again!")
        else:
            print("You must enter a number > 0... Try again!")


def update_fig(A, rects, iteration, text):
    for rect, val in zip(rects, A):
        rect.set_height(val)
    iteration[0] += 1
    text.set_text("# of Operations: {}".format(iteration[0]))

def output(A, N, title, generator):
    fig, ax = plt.subplots()
    ax.set_title(title)

    bar_rects = ax.bar(range(len(A)), A, align="edge")
    ax.set_xlim(0, N)
    ax.set_ylim(0, int(1.07 * N))

    text = ax.text(0.02, 0.95, "", transform=ax.transAxes)

    iteration = [0]
    anim = animation.FuncAnimation(fig, func=update_fig,
        fargs=(bar_rects, iteration, text), frames=generator, interval=1,
        repeat=False)
    plt.show()


if __name__ == "__main__":
    main()