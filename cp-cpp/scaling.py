import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler

# Load your dataset
df = pd.read_csv("your_telco_churn_dataset.csv")

# Convert TotalCharges to numeric if needed
df["TotalCharges"] = pd.to_numeric(df["TotalCharges"], errors="coerce")
df.dropna(inplace=True)  # Drop rows with NaN created during conversion

# Select numerical columns for scaling
features = ['tenure', 'MonthlyCharges', 'TotalCharges']
df_num = df[features]

# Standard Scaling
scaler = StandardScaler()
scaled = scaler.fit_transform(df_num)

df_scaled = pd.DataFrame(scaled, columns=[f + "_scaled" for f in features])

# Combine for plotting
df_combined = pd.concat([df_num, df_scaled], axis=1)

# Plot before and after scaling
fig, axes = plt.subplots(3, 2, figsize=(12, 10))
for i, feature in enumerate(features):
    sns.histplot(df_combined[feature], ax=axes[i, 0], kde=True, color='blue')
    axes[i, 0].set_title(f"Before Scaling: {feature}")
    
    sns.histplot(df_combined[feature + "_scaled"], ax=axes[i, 1], kde=True, color='green')
    axes[i, 1].set_title(f"After Scaling: {feature}")

plt.tight_layout()
plt.show()
