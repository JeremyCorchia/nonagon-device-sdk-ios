// swift-tools-version: 5.9

import PackageDescription

let version = "2.0.0"

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
            checksum: "5e2ed7840dafd26017ff1107df2734c666ea08ba222bafef1318405c934ad3cd"
        ),
    ]
)
