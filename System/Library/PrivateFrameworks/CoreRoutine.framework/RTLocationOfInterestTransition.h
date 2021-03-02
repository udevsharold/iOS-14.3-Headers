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

@class NSUUID, NSDate;

@interface RTLocationOfInterestTransition : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSDate* _startDate;
	NSDate* _stopDate;
	NSUUID* _visitIdentifierOrigin;
	NSUUID* _visitIdentifierDestination;
	long long _modeOfTransportation;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * stopDate;                           //@synthesize stopDate=_stopDate - In the implementation block
@property (nonatomic,readonly) NSUUID * visitIdentifierOrigin;                   //@synthesize visitIdentifierOrigin=_visitIdentifierOrigin - In the implementation block
@property (nonatomic,readonly) NSUUID * visitIdentifierDestination;              //@synthesize visitIdentifierDestination=_visitIdentifierDestination - In the implementation block
@property (nonatomic,readonly) long long modeOfTransportation;                   //@synthesize modeOfTransportation=_modeOfTransportation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)description;
-(NSDate *)stopDate;
-(NSDate *)startDate;
-(BOOL)isEqual:(id)arg1 ;
-(long long)modeOfTransportation;
-(NSUUID *)visitIdentifierOrigin;
-(NSUUID *)visitIdentifierDestination;
-(id)initWithIdentifier:(id)arg1 startDate:(id)arg2 stopDate:(id)arg3 visitIdentifierOrigin:(id)arg4 visitIdentifierDestination:(id)arg5 modeOfTransportation:(long long)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
