/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CalLocation, NSString;

@interface CalRoute : NSObject <NSSecureCoding> {

	CalLocation* _start;
	CalLocation* _end;
	double _duration;
	NSString* _route;

}

@property (retain) CalLocation * start;              //@synthesize start=_start - In the implementation block
@property (retain) CalLocation * end;                //@synthesize end=_end - In the implementation block
@property (assign) double duration;                  //@synthesize duration=_duration - In the implementation block
@property (copy) NSString * route;                   //@synthesize route=_route - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRoute:(NSString *)arg1 ;
-(void)setStart:(CalLocation *)arg1 ;
-(void)setEnd:(CalLocation *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(NSString *)route;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(CalLocation *)start;
-(CalLocation *)end;
-(double)duration;
-(void)encodeWithCoder:(id)arg1 ;
@end

