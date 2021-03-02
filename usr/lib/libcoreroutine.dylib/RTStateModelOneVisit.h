/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTStateModelLocation, NSUUID, RTStateModelEntryExit;

@interface RTStateModelOneVisit : NSObject <NSSecureCoding> {

	RTStateModelLocation* _location;
	NSUUID* _identifier;
	RTStateModelEntryExit* _EntryExit_s;
	long long _numOfDataPts;

}

@property (nonatomic,retain) RTStateModelLocation * location;                  //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) RTStateModelEntryExit * EntryExit_s;              //@synthesize EntryExit_s=_EntryExit_s - In the implementation block
@property (assign,nonatomic) long long numOfDataPts;                           //@synthesize numOfDataPts=_numOfDataPts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(RTStateModelLocation *)location;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)description;
-(BOOL)isComplete;
-(void)setLocation:(RTStateModelLocation *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)numOfDataPts;
-(void)setNumOfDataPts:(long long)arg1 ;
-(id)initWithLocation:(id)arg1 entryExit:(id)arg2 andNumOfDataPts:(long long)arg3 ;
-(RTStateModelEntryExit *)EntryExit_s;
-(void)setEntryExit_s:(RTStateModelEntryExit *)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 entryTimestamp:(double)arg4 exitTimestamp:(double)arg5 numOfDataPts:(long long)arg6 ;
@end
