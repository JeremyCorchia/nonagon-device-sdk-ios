// swift-tools-version: 5.9

import PackageDescription

let version = "1.1.6"

let package = Package(
    name: "NonagonDeviceSDK",
    platforms: [.iOS(.v15)],
    products: [
        .library(name: "NonagonDeviceSDK", targets: ["NonagonDeviceSDK"]),
    ],
    targets: [
        .binaryTarget(
            name: "NonagonDeviceSDK",
            url: "https://github.com/JeremyCorchia/nonagon-device-sdk-ios/releases/download/\(version)/NonagonDeviceSDK.xcframework.zip",
            checksum: "a666592e5b3c3f4529ced6116f954f57266e888f8da2283c0cc833ad1adaed19"
        ),
    ]
)
