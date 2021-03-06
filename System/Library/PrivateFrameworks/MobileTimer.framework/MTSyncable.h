/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol MTSyncable <MTSyncableObject>
@property (nonatomic,readonly) unsigned long long syncType; 
@property (nonatomic,readonly) float syncVersion; 
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSDate * syncDate; 
@required
-(unsigned long long)syncType;
-(NSString *)syncIdentifier;
-(float)syncVersion;
-(NSDate *)syncDate;

@end

