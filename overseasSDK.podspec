#
# Be sure to run `pod lib lint overseasSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'overseasSDK'
  s.version          = '0.1.4'
  s.summary          = 'A short description of overseasSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/xiaoyuting/overseasSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'xiaoyuting' => '479072483@qq.com' }
  s.source           = { :git => 'https://github.com/xiaoyuting/overseasSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
# Pod库的构建设置排除arm64架构模拟器
s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
# 主工程的构建设置排除arm64架构模拟器
s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  s.ios.deployment_target = '12.0'

  #s.source_files = 'overseasSDK/Classes/**/*'
   
    s.source_files = 'overseasSDK/upload-symbols'
    s.source_files = 'overseasSDK/run'
   s.vendored_frameworks = ['overseasSDK/loginSDK.framework'] #自己的framework在工程中的路径
   s.resource_bundles = {
     'Resources' => ['overseasSDK/Assets/*.bundle']
   }
  
 

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
