// swift-tools-version: 5.9

import PackageDescription

let version = "1.1.4"

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
            checksum: "20640221466ddaad0e20ae08a441d4a3ec3453c91972818b808e9cb05af2129d"
        ),
    ]
)
