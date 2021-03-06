/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class STDowntime;

@interface STDailySchedule : NSManagedObject

@property (assign,nonatomic) long long weekday; 
@property (assign,nonatomic) long long startHour; 
@property (assign,nonatomic) long long startMinute; 
@property (assign,nonatomic) long long endHour; 
@property (assign,nonatomic) long long endMinute; 
@property (nonatomic,retain) STDowntime * downtime; 
@end

