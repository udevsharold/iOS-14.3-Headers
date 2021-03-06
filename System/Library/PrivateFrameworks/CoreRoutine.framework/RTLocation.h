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

@class NSDate;

@interface RTLocation : NSObject <NSCopying, NSSecureCoding> {

	int _referenceFrame;
	double _latitude;
	double _longitude;
	double _horizontalUncertainty;
	double _altitude;
	double _verticalUncertainty;
	NSDate* _date;
	double _speed;

}

@property (assign,nonatomic) double latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double horizontalUncertainty;              //@synthesize horizontalUncertainty=_horizontalUncertainty - In the implementation block
@property (nonatomic,readonly) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) double uncertainty; 
@property (nonatomic,readonly) double altitude;                         //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double verticalUncertainty;              //@synthesize verticalUncertainty=_verticalUncertainty - In the implementation block
@property (nonatomic,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int referenceFrame;                      //@synthesize referenceFrame=_referenceFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)referenceFrame;
-(double)altitude;
-(id)init;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)uncertainty;
-(double)longitude;
-(NSDate *)date;
-(double)speed;
-(double)horizontalUncertainty;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setUncertainty:(double)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 altitude:(double)arg4 verticalUncertainty:(double)arg5 date:(id)arg6 referenceFrame:(int)arg7 speed:(double)arg8 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 date:(id)arg4 ;
-(void)setHorizontalUncertainty:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5 ;
-(double)verticalUncertainty;
-(id)coordinateToString;
-(double)latitude;
-(void)setLatitude:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

