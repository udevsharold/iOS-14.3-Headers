/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocation, NSArray;

@interface RTSignalGeneratorOptions : NSObject <NSCopying, NSSecureCoding> {

	RTLocation* _startLocation;
	RTLocation* _endLocation;
	NSArray* _expectedVisits;

}

@property (nonatomic,readonly) RTLocation * startLocation;              //@synthesize startLocation=_startLocation - In the implementation block
@property (nonatomic,readonly) RTLocation * endLocation;                //@synthesize endLocation=_endLocation - In the implementation block
@property (nonatomic,readonly) NSArray * expectedVisits;                //@synthesize expectedVisits=_expectedVisits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)visitsDescriptionDataAtPath:(id)arg1 ;
+(id)getVisitsFromVisitsDescriptionData:(id)arg1 ;
-(RTLocation *)endLocation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithStartLocation:(id)arg1 endLocation:(id)arg2 expectedVisits:(id)arg3 ;
-(id)initWithVisitsDescriptionPListPath:(id)arg1 ;
-(NSArray *)expectedVisits;
-(RTLocation *)startLocation;
-(void)encodeWithCoder:(id)arg1 ;
@end

