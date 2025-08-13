# CardioVision
This project implements a deep learning-based pipeline to predict heart attack risk levels by analyzing retinal fundus photographs. Retinal images are a rich source of microvascular patterns that can indirectly indicate systemic health conditions, including cardiovascular risk.

The model identifies subtle changes in retinal blood vessels—such as narrowing, microaneurysms, or hemorrhages—which have been linked in medical research to heart disease. By detecting these features, the system outputs a continuous risk score or categorical classification (e.g., Low, Medium, High risk) for potential cardiovascular events.

This approach enables non-invasive, cost-effective, and early detection of heart attack risk, making it suitable for integration into eye clinics, primary care centers, and mobile screening setups.

🧠 Model Overview
Model Type: Convolutional Neural Network (CNN)

Architecture: Transfer learning using pre-trained models (e.g., ResNet, EfficientNet) or custom CNN layers

Training Approach:

Fine-tuning pre-trained layers for feature extraction

Adding fully connected layers for classification

Softmax activation for multi-class classification or sigmoid for probability scores

Loss Function: Categorical Crossentropy (for multi-class)

Optimizer: Adam (configurable learning rate)

📂 Input & Output
Input: High-resolution retinal fundus images (preprocessed to 224×224 pixels)

Output:

Continuous Risk Score → Probability (0–1) of cardiovascular event

Risk Category → One of the predefined classes:

Low Risk

Moderate Risk

High Risk

Very High Risk

🧪 Dataset Details
Data Type: Retinal fundus images

Source: Public datasets (e.g., DRIVE, Messidor) and/or custom medical dataset

Class Distribution: Images categorized into four classes based on hemoglobin (Hb) levels or clinical risk labels

Preprocessing Steps:

Image resizing & normalization

Data augmentation (rotation, flipping, brightness/contrast adjustment)

Noise reduction & vessel enhancement

📊 Evaluation Metrics
Accuracy (%)

Precision, Recall, F1-score (per class)

ROC-AUC score (per class)

Confusion matrix analysis

Grad-CAM visualizations to interpret CNN attention

🚀 Use-Cases
Primary Healthcare → Integrate with retinal imaging devices for automated risk screening

Rural & Remote Clinics → Enable non-invasive, portable screening solutions

Preventive Cardiology → Assist doctors in identifying high-risk individuals early

AI-Powered Health Check-ups → Combine with other biomarkers for multi-factor cardiovascular risk assessment

