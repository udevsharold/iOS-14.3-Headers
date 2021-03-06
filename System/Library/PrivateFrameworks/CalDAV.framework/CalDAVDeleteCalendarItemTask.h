/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVDeleteTask.h>

@class NSString;

@interface CalDAVDeleteCalendarItemTask : CoreDAVDeleteTask {

	NSString* _previousScheduleTag;

}

@property (nonatomic,retain) NSString * previousScheduleTag;              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(id)additionalHeaderValues;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(id)description;
-(NSString *)previousScheduleTag;
@end

