// swift-tools-version: 5.9

import PackageDescription

let version = "2.0.1"

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
            checksum: "cea4b7679f02fb6009550dce34b5429261128a7c447404b565a3576e0e8074e5"
        ),
    ]
)
