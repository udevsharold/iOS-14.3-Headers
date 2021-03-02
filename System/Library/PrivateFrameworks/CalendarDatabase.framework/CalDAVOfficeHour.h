/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents;

@interface CalDAVOfficeHour : NSObject <NSSecureCoding> {

	BOOL _enabled;
	NSDateComponents* _startDate;
	NSDateComponents* _endDate;

}

@property (assign,nonatomic) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSDateComponents * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)officeHoursFromICS:(id)arg1 ;
+(id)icsFromOfficeHours:(id)arg1 ;
+(id)officeHoursFromData:(id)arg1 ;
+(id)dataFromOfficeHours:(id)arg1 ;
-(NSDateComponents *)endDate;
-(BOOL)enabled;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSDateComponents *)startDate;
-(void)setStartDate:(NSDateComponents *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setEndDate:(NSDateComponents *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
