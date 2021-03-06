/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PCSMTT, NSDate;

@interface PCSMTTPoint : NSObject <NSSecureCoding> {

	BOOL _success;
	NSString* _name;
	double _time;
	PCSMTT* _mtt;
	NSDate* _start;

}

@property (__weak) PCSMTT * mtt;                 //@synthesize mtt=_mtt - In the implementation block
@property (retain) NSDate * start;               //@synthesize start=_start - In the implementation block
@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) double time;                //@synthesize time=_time - In the implementation block
@property (readonly) BOOL success;               //@synthesize success=_success - In the implementation block
+(BOOL)supportsSecureCoding;
-(PCSMTT *)mtt;
-(void)setName:(NSString *)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
-(double)time;
-(id)jsonDict;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setMtt:(PCSMTT *)arg1 ;
-(NSDate *)start;
-(NSString *)name;
-(void)complete:(BOOL)arg1 ;
-(BOOL)success;
-(void)encodeWithCoder:(id)arg1 ;
-(void)complete:(BOOL)arg1 time:(double)arg2 ;
-(id)initWithMTT:(id)arg1 name:(id)arg2 ;
@end

