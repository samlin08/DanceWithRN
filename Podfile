# Uncomment the next line to define a global platform for your project
# platform :ios, '9.0'

target 'DanceWithRN' do
  # Uncomment the next line if you're using Swift or would like to use dynamic frameworks
  # use_frameworks!
  pod “Yoga", :path => ‘./node_modules/react-native/ReactCommon/yoga’
  pod 'React', :path => ‘./node_modules/react-native', :subspecs => [
    'Core',
    'DevSupport', # 如果RN版本 >= 0.43，则需要加入此行才能开启开发者菜单
    'RCTText',
    'RCTNetwork',
    'RCTWebSocket', # 这个模块是用于调试功能的
    # 在这里继续添加你所需要的模块
  ]
  pod 'WeexSDK', '0.18.0'   ## 建议使用WeexSDK新版本
  # pod 'WXDevtool',   '0.15.3', :configurations => ['Debug']

  # Pods for DanceWithRN
  pod "AFNetworking", "~> 3.1.0”
  pod 'Masonry', '~> 1.1.0'

end
