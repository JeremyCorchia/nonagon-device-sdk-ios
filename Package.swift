// swift-tools-version: 5.9

import PackageDescription

let version = "1.1.5"

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
            checksum: "b6c49f57c4b854b897072e9a71f6922593f8d622b48f33929f8f723682bd5b7f"
        ),
    ]
)
