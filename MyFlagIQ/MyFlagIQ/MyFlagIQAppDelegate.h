//
//  MyFlagIQAppDelegate.h
//  MyFlagIQ
//
//  Created by 森山 徳彦 on 11/10/19.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MyFlagIQViewController;

@interface MyFlagIQAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MyFlagIQViewController *viewController;

@end
