import cv2
from cvzone.HandTrackingModule import HandDetector

# Webcam
cap = cv2.VideoCapture(0)
cap.set(3, 1280)
cap.set(4, 720)

detector = HandDetector(detectionCon=0.5,maxHands=2)

# Loop
while True:
    success, img = cap.read()
    hands, img = detector.findHands(img)
    cv2.imshow("Image",img)
    cv2.waitKey(1)
