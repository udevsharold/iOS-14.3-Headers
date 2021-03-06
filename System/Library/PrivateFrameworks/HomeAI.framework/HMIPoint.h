/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMIPoint : HMFObject <NSSecureCoding> {

	CGPoint _point;

}

@property (readonly) CGPoint point;              //@synthesize point=_point - In the implementation block
@property (readonly) double x; 
@property (readonly) double y; 
+(BOOL)supportsSecureCoding;
-(double)y;
-(double)x;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPoint:(CGPoint)arg1 ;
-(CGPoint)point;
-(void)encodeWithCoder:(id)arg1 ;
@end

