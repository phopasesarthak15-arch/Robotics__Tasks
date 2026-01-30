# ROBOTICS_TASKS
## Domain: CODING
### Name: Sarthak Phopase
### **Research And Study**
1.Study OpenCV
<br>
2.Research YOLO Models
# 1. Study OpenCV
## Introduction
This Repository contains the study and research on **OpenCV**(Open Source Computer Vision Library) and it's applications in **Robotics Vision systems**.
<br>
The Focus is on understanding core concepts,**image processing techniques**,and how robots use vision to interact with real world. 

## What is OpenCV?
OpenCV is an **open-source library** used for **image and video processing**.<br>
Tools OpenCV provides:
- Read and process images
- Detect objects, faces, and edges
- Perform vision tasks
- Support robotics applications
### Key Features:
- Written in **C++** mainly, also **Java** and **Python** can be used
- Fast and optimized for real-time systems
- Mainly used in Robotics & AI
### OpenCV used in Robotics Vision
Robots use OpenCV to **see, analyze, and make decisions** based on input from cameras.
### Robotics Applications:
- **Object Detection** – Identifying objects 
- **Line Following Robots** – Detecting paths 
- **Obstacle Avoidance** – Identifying obstacles using Vision
- **Face Recognition** – Used in security
- **Navigation** – Assisting robots to move smartly

## Basic Image Processing Tasks
Image processing is the foundation of computer vision.  
### 1️.Image Reading & Display
- Load images from files or camera
- Display images on screen
### 2️.Grayscale Conversion
- Converts colored images into shades of gray
- Reduces complexity and processing time
### 3️.Image Blurring
- Reduces noise from images
- Helps in smoother edge detection
### 4️.Edge Detection
- Detects boundaries of objects
- Helps in shape and object recognition
### 5️.Thresholding
- Converts images into binary
- Used for object segmentation

## Explore Computer Vision Concepts
Computer Vision enables machines to **interpret and understand visual data** like humans.
### Key Concepts:
- **Image & Video Processing**
- **Pixels and Resolution**
- **Contours** 
- **Feature Detection** 
- **Object Detection vs Image Classification**
  - *Classification*: What is in the image?
  - *Detection*: Where is the object in the image?
## Tools & Technologies Used
- OpenCV Library
- C++ / Python
- Images captured using camera  

---

In robotics, OpenCV acts as the **Eyes of the Robot**.

---
# 2. Research YOLO Models
## Introduction
This repository contains study on **YOLO** (You Only Look Once) models, which are used for **Real-time object detection**.


## What is YOLO?
YOLO is a **real-time object detection algorithm** that detects objects in an image using a **single forward pass of a neural network**.
<br>
Unlike traditional methods that scan an image multiple times, YOLO looks at the **entire image only once**, making it extremely **fast and efficient**.
### Characteristics:
- Real-time detection
- High speed and Accuracy
- Detects multiple objects at once
- Provides object **class + location**

## What Does YOLO Do? 
YOLO can:
- Identify what objects are present in an image  
- Determine where the objects are located  
- Draw bounding boxes around detected objects  
### Example Outputs:
- Person detected at (x, y, width, height)
- Car detected with 92% confidence
- Multiple objects detected in a single frame
This makes YOLO suitable for:
- Autonomous vehicles
- Surveillance systems
- Robotics vision
- Traffic monitoring
### How YOLO Works
1. Input image is divided into a grid
2. Each grid predicts bounding boxes
3. Each box contains:
   - Object class
   - Confidence score
   - Bounding box coordinates
4. Final detections are filtered using confidence thresholds