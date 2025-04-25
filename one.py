import matplotlib.pyplot as plt
import matplotlib.patches as mpatches

# Create figure and axis
fig, ax = plt.subplots(figsize=(10, 8))
ax.set_xlim(0, 10)
ax.set_ylim(0, 12)
ax.axis('off')

# Define box properties
box_props = dict(boxstyle="round,pad=0.3", edgecolor="black", facecolor="lightblue")

# Define component positions
components = {
    "Market Data Ingestion": (5, 11),
    "FPGA Processing & Parsing": (5, 9.5),
    "Cache (L1/L2)": (5, 8),
    "Preprocessing & Feature Extraction": (5, 6.5),
    "CPU/ALU Computation": (5, 5),
    "Trading Strategy Execution": (5, 3.5),
    "Order Execution & Routing": (5, 2),
    "Network Interface (DMA/PCIe)": (5, 1),
    "Risk Management & Trade Logging": (5, 0)
}

# Draw boxes
for text, (x, y) in components.items():
    ax.text(x, y, text, ha='center', va='center', bbox=box_props, fontsize=10)

# Draw arrows (Datapath Flow)
arrows = [
    ((5, 10.7), (5, 9.8)),
    ((5, 9.2), (5, 8.2)),
    ((5, 7.7), (5, 6.7)),
    ((5, 6), (5, 5.2)),
    ((5, 4.5), (5, 3.7)),
    ((5, 3), (5, 2.2)),
    ((5, 1.5), (5, 1.2)),
    ((5, 0.7), (5, 0.2))
]

for (x1, y1), (x2, y2) in arrows:
    ax.annotate("", xy=(x2, y2), xytext=(x1, y1), arrowprops=dict(arrowstyle="->", lw=2))

# Title
ax.set_title("High-Frequency Trading (HFT) System Datapath", fontsize=12, fontweight="bold")

# Show plot
plt.show()
