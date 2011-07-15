//
//  AAppDelegate.h
//  A
//
//  Created by Melissa Aaron on 7/14/11.
//  Copyright 2011 Drexel University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

