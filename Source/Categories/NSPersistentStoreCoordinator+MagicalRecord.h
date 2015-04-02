//
//  NSPersistentStoreCoordinator+MagicalRecord.h
//
//  Created by Saul Mora on 3/11/10.
//  Copyright 2010 Magical Panda Software, LLC All rights reserved.
//

#import "MagicalRecordHelpers.h"
#import "NSPersistentStore+MagicalRecord.h"

extern NSString * const kMagicalRecordPSCDidCompleteiCloudSetupNotification;

@interface NSPersistentStoreCoordinator (MagicalRecord)

+ (NSPersistentStoreCoordinator *) MR_defaultStoreCoordinator;
+ (void) MR_setDefaultStoreCoordinator:(NSPersistentStoreCoordinator *)coordinator;

+ (NSPersistentStoreCoordinator *) MR_coordinatorWithInMemoryStore;
-(NSPersistentStore *)MR_addSharedSqliteStoreNamed:(id)storeFileName withOptions:(__autoreleasing NSDictionary *)options;

+ (NSPersistentStoreCoordinator *) MR_newPersistentStoreCoordinator NS_RETURNS_RETAINED;

+ (NSPersistentStoreCoordinator *) MR_coordinatorWithSqliteStoreNamed:(NSString *)storeFileName;
+ (NSPersistentStoreCoordinator *) MR_coordinatorWithAutoMigratingSqliteStoreNamed:(NSString *)storeFileName;
+ (NSPersistentStoreCoordinator *) MR_coordinatorWithPersitentStore:(NSPersistentStore *)persistentStore;
+(NSPersistentStoreCoordinator *)MR_sharedCoordinatorWithSqliteStoreNamed:(NSString *)storeFileName;
+ (NSPersistentStoreCoordinator *) MR_coordinatorWithiCloudContainerID:(NSString *)containerID contentNameKey:(NSString *)contentNameKey localStoreNamed:(NSString *)localStoreName cloudStorePathComponent:(NSString *)subPathComponent;

+ (NSPersistentStoreCoordinator *) MR_coordinatorWithiCloudContainerID:(NSString *)containerID contentNameKey:(NSString *)contentNameKey localStoreNamed:(NSString *)localStoreName cloudStorePathComponent:(NSString *)subPathComponent completion:(void(^)(void))completionHandler;

- (NSPersistentStore *) MR_addInMemoryStore;
- (NSPersistentStore *) MR_addAutoMigratingSqliteStoreNamed:(NSString *) storeFileName;
- (NSPersistentStore *) MR_addSqliteStoreNamed:(id)storeFileName withOptions:(__autoreleasing NSDictionary *)options;
- (void) MR_addiCloudContainerID:(NSString *)containerID contentNameKey:(NSString *)contentNameKey localStoreNamed:(NSString *)localStoreName cloudStorePathComponent:(NSString *)subPathComponent;
- (void) MR_addiCloudContainerID:(NSString *)containerID contentNameKey:(NSString *)contentNameKey localStoreNamed:(NSString *)localStoreName cloudStorePathComponent:(NSString *)subPathComponent completion:(void(^)(void))completionBlock;
+ (void) MR_setSharedDefaultStoreCoordinator:(NSPersistentStoreCoordinator *)coordinator;
+ (NSPersistentStoreCoordinator *) MR_newSharedPersistentStoreCoordinator;
+ (NSPersistentStoreCoordinator *) MR_sharedDefaultCoordinator;

@end
