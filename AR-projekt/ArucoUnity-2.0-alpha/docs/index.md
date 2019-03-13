# ArucoUnity documentation

Bring augmented reality to Unity by tracking [ArUco markers](https://docs.opencv.org/master/d5/dae/tutorial_aruco_detection.html) in real time. Standard mono cameras, such as webcams, but also stereo cameras and fisheye lenses are supported.

See the [README](https://github.com/NormandErwan/ArucoUnity/blob/master/README.md) for more details.

![Demo 1](images/ar_roll_a_ball.gif)
![Demo 2](images/extended_phone_screen.gif)

*Left: AR [Roll a ball](https://unity3d.com/fr/learn/tutorials/s/roll-ball-tutorial). Right: The markers tracking allows to extend the phone's screen.*

## Usage

Download the [latest build release](https://github.com/NormandErwan/ArucoUnity/releases). Or see the [Developing section of the README.md](https://github.com/NormandErwan/ArucoUnity/blob/master/README.md#developing). Then, import `ArucoUnity.package` in your Unity project.

A typical workflow with ArucoUnity is:

1. [Create Markers](manual/create-markers.html), print and place them in the environment.
2. [Calibrate a Camera](manual/calibrate-a-camera.html) using a calibration board.
3. [Track Markers](manual/track-markers.html).

## Developing

Read the [ArucoUnity Architecture](manual/aruco-unity-architecture.html), [Build From Sources](manual/build-from-sources.html) and [API Documentation](api/ArucoUnity.Calibration.html) pages.

To better understand the algorithms used in the OpenCV modules, read these tutorials:

- [Detection of ArUco Markers](https://docs.opencv.org/3.4/d5/dae/tutorial_aruco_detection.html)
- [Calibration with ArUco and ChArUco](https://docs.opencv.org/3.4/da/d13/tutorial_aruco_calibration.html)
- [Camera calibration With OpenCV](https://docs.opencv.org/3.4/d4/d94/tutorial_camera_calibration.html)
- [Omnidirectional Cameara [*sic*] Calibration](https://docs.opencv.org/3.4/dd/d12/tutorial_omnidir_calib_main.html)