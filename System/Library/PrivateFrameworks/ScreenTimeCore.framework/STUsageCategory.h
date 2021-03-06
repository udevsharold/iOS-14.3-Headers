/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, STUsageBlock;

@interface STUsageCategory : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long totalTimeInSeconds; 
@property (nonatomic,retain) NSSet * timedItems; 
@property (nonatomic,retain) STUsageBlock * block; 
+(id)categoryItemsExcludingSystemCategories:(id)arg1 ;
+(id)applicationAndWebItemsExcludingSystemHiddenApplications:(id)arg1 ;
@end

