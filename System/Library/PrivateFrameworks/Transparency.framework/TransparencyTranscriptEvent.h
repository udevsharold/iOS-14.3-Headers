/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface TransparencyTranscriptEvent : NSObject {

	BOOL _success;
	NSDate* _timestamp;
	NSString* _name;

}

@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (retain) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign) BOOL success;                    //@synthesize success=_success - In the implementation block
-(void)setSuccess:(BOOL)arg1 ;
-(id)serialize;
-(void)setName:(NSString *)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)name;
-(BOOL)success;
-(id)initWithName:(id)arg1 ;
@end

