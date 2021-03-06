/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSData, NSNumber;

@interface HMDSharedHomeModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSData * homeData; 
@property (nonatomic,retain) NSNumber * configurationVersion; 
+(id)properties;
-(BOOL)isReplayable;
@end

