//
//  LCCKMapViewController.h
//  LeanCloudIMKit-iOS
//
//  v0.7.20 Created by ElonChan (微信向我报BUG:chenyilong1010) on 16/3/30.
//  Copyright © 2016年 LeanCloud. All rights reserved.
//

@import UIKit;
@import MapKit;
@import CoreLocation;

@interface LCCKMapViewController : UIViewController

@property (nonatomic, strong) CLLocation *location;
- (instancetype)initWithLocation:(CLLocation *)location;
+ (instancetype)initWithLocation:(CLLocation *)location;

@end
