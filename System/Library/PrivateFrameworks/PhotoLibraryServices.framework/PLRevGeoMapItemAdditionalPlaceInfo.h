/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject <NSSecureCoding> {

	NSString* _name;
	NSNumber* _placeType;
	unsigned long long _dominantOrderType;
	double _areaInSquareMeters;

}

@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * placeType;                         //@synthesize placeType=_placeType - In the implementation block
@property (nonatomic,readonly) unsigned long long dominantOrderType;              //@synthesize dominantOrderType=_dominantOrderType - In the implementation block
@property (nonatomic,readonly) double areaInSquareMeters;                         //@synthesize areaInSquareMeters=_areaInSquareMeters - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)dominantOrderType;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)placeType;
-(NSString *)name;
-(double)areaInSquareMeters;
-(id)initWithName:(id)arg1 placeType:(id)arg2 dominantOrderType:(unsigned long long)arg3 areaInSquareMeters:(double)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
