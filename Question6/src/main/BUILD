# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary

filegroup(
    name = "data",
    srcs = ["vector.txt"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = ["//src/lib:SolutionLib"],
    data = [":data"],
)