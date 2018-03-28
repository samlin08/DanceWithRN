//
//  AppDelegate.h
//  DanceWithRN
//
//  Created by 林 夏 on 27/03/2018.
//  Copyright © 2018 林 夏. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

