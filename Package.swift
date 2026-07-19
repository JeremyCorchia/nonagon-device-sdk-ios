// swift-tools-version: 5.9

import PackageDescription

let version = "2.0.2"

let package = Package(
    name: "NonagonDeviceSDK",
    platforms: [.iOS(.v15)],
    products: [
        .library(name: "NonagonDeviceSDK", targets: ["NonagonDeviceSDK"]),
    ],
    targets: [
        .binaryTarget(
            name: "NonagonDeviceSDK",
            url: "https://github.com/JeremyCorchia/nonagon-device-sdk-ios/releases/download/2.0.2/NonagonDeviceSDK.xcframework.zip",
            checksum: "63e05a6ac435b957f7576fc04a85d6615c6aaa602f15f30235dc13640a55d84b"
        ),
    ]
)
