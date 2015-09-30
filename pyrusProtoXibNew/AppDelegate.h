//
//  AppDelegate.h
//  pyrusProtoXibNew
//
//  Created by AIR on 30.09.15.
//  Copyright © 2015 Ivan Golikov. All rights reserved.
//

#import <Cocoa/Cocoa.h>

//используем Core Data


@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

