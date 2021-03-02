/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GEOCoordinatePath : NSObject <NSSecureCoding> {

	SCD_Union_GE142* _coordinates;
	BOOL _usesZilch;
	unsigned long long _count;
	double* _pointLengths;

}

@property (nonatomic,readonly) ControlPoint* zilchControlPoints; 
@property (nonatomic,readonly) unsigned long long count;                      //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) double* pointLengths;                          //@synthesize pointLengths=_pointLengths - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)length;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_GE98)coordinateAt:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(double*)pointLengths;
-(ControlPoint*)zilchControlPoints;
-(void)setZilchCoordinates:(ControlPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)setBasicCoordinates:(SCD_Struct_GE98*)arg1 count:(unsigned long long)arg2 ;
-(void)setPointLengths:(double*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
