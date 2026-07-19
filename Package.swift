// swift-tools-version: 5.9

import PackageDescription

let version = "3.0.0"

let package = Package(
    name: "NonagonDeviceSDK",
    platforms: [.iOS(.v15)],
    products: [
        .library(name: "NonagonDeviceSDK", targets: ["NonagonDeviceSDK"]),
    ],
    targets: [
        .binaryTarget(
            name: "NonagonDeviceSDK",
            url: "https://github.com/JeremyCorchia/nonagon-device-sdk-ios/releases/download/3.0.0/NonagonDeviceSDK.xcframework.zip",
            checksum: "44596befb02af8dad340e5d881e1f06905ce84d808f0e487e85c8f68b391ca11"
        ),
    ]
)
