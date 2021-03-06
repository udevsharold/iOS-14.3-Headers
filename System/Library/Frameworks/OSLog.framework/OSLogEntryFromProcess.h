/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol OSLogEntryFromProcess
@property (nonatomic,readonly) unsigned long long activityIdentifier; 
@property (nonatomic,readonly) NSString * process; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,readonly) NSString * sender; 
@property (nonatomic,readonly) unsigned long long threadIdentifier; 
@required
-(unsigned long long)activityIdentifier;
-(unsigned long long)threadIdentifier;
-(NSString *)sender;
-(NSString *)process;
-(int)processIdentifier;

@end

