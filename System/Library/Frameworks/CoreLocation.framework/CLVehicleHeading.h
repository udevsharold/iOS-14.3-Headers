/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CLVehicleHeading : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double trueHeading; 
@property (nonatomic,readonly) NSDate * timestamp; 
+(BOOL)supportsSecureCoding;
-(NSDate *)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithClientVehicleHeading:(SCD_Struct_CL2)arg1 ;
-(double)trueHeading;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg1 ;
@end
