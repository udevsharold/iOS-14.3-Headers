/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STUsageBlock;

@interface STUsageCountedItem : NSManagedObject

@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) long long numberOfPickups; 
@property (nonatomic,readonly) long long numberOfNotifications; 
@property (nonatomic,readonly) BOOL usageTrusted; 
@property (nonatomic,readonly) STUsageBlock * block; 
+(id)notificationItemsExcludingSystemHiddenApplications:(id)arg1 ;
+(id)pickupItemsExcludingSystemHiddenApplications:(id)arg1 ;
@end
