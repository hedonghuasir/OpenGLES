//
//  AppDelegate.h
//  Tutorialtest
//
//  Created by hdh on 2019/5/8.
//  Copyright © 2019 hdh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    OpenGLView* _glView;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, retain) IBOutlet OpenGLView *glView;


@end

