/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNSizeRange : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _minimumDimension;
	unsigned long long _maximumDimension;
	unsigned long long _idealDimension;

}

@property (nonatomic,readonly) unsigned long long minimumDimension;              //@synthesize minimumDimension=_minimumDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumDimension;              //@synthesize maximumDimension=_maximumDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long idealDimension;                //@synthesize idealDimension=_idealDimension - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isAllowedDimension:(unsigned long long)arg1 ;
-(unsigned long long)minimumDimension;
-(unsigned long long)idealDimension;
-(id)initWithMinimumDimension:(unsigned long long)arg1 maximumDimension:(unsigned long long)arg2 idealDimension:(unsigned long long)arg3 ;
-(unsigned long long)maximumDimension;
-(void)encodeWithCoder:(id)arg1 ;
@end

