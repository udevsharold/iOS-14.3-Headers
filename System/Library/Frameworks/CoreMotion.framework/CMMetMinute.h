/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber;

@interface CMMetMinute : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fStartDate;
	NSNumber* fAverageIntensity;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSNumber * averageIntensity; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSNumber *)averageIntensity;
-(id)initWithStartDate:(id)arg1 averageIntensity:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)startDate;
-(id)initWithSample:(CLMetMinute)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

