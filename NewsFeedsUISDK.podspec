 |s|
  s.name         = 'NewsFeedsUISDK'
  s.version      = '1.3.5'
  s.summary      = "网易有料iOS UI SDK，提供快速集成功能"
  s.description  = "网易有料iOS UI SDK，提供快速集成功能"
  s.homepage     = 'https://youliao.163yun.com/'
  s.authors      = { 'aron' => 'sunweirong32@163.com' }
  s.license      = { :type => 'Free', :text => "©2017 youliao.163yun.com" }
  s.source       = { :http => "http://crash-public-online.nos.netease.com/NewsFeedsUISDK_1.3.5.zip" }
  s.requires_arc = true
  s.platform     = :ios
  s.vendored_frameworks ='NewsFeedsUISDK.framework'
  s.ios.deployment_target = "9.0"
  
  s.frameworks = 'UIKit', 'AVFoundation', 'MediaPlayer', 'CoreMedia'
  s.dependency 'NewsFeedsSDK'
  s.dependency 'SDWebImage'
  s.dependency 'SDWebImage/WebP'
  s.dependency 'SDWebImage/GIF'
  s.dependency 'UITableView+FDTemplateLayoutCell'
  s.dependency 'Masonry'
end