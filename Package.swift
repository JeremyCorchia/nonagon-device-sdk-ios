// swift-tools-version: 5.9

import PackageDescription

let version = "1.1.1"

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
            checksum: "748a031ff659e99a82dfc798d69e686ed5d02c1887dc94fe8df99ff2b0a0181c"
        ),
    ]
)
