Pod::Spec.new do |s|

  s.name         = "KiiCloud"
  s.version      = "2.1.24"
  s.summary      = "A Cloud Storage SDK of KiiCloud."
  s.description  = <<-DESC
                   A Cloud Storage SDK of KiiCloud.
                   DESC
  s.homepage     = 'http://www.kii.com'  
  s.author             = { "KiiCorp" => "npm-admin@kii.com" }
  s.platform     = :ios
  s.license      = 'MIT'
  s.source = { :git => 'https://github.com/KiiCorp/KiiCloudSDK-iOS.git', :tag => 'v2.1.24'  }
  s.source_files  = 'KiiSDK.framework/**/*.h'
  s.public_header_files = 'KiiSDK.framework/**/*.h'
  s.preserve_paths = "KiiSDK.framework"
  s.vendored_frameworks = "KiiSDK.framework"

  s.frameworks = "MobileCoreServices", "Accounts", "Social", "Security", "ImageIO"
  s.libraries = "sqlite3"

  s.requires_arc = true

end