//
//  AppDelegate.h
//  TabBar
//
//  Created by jakouk on 2016. 10. 25..
//  Copyright © 2016년 jakouk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (BOOL)application:(UIApplication *)application shouldSaveApplicationState:(NSCoder *)coder;

@end

