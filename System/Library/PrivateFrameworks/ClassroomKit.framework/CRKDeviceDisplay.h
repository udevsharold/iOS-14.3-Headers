/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CRKDeviceDisplay : NSObject <NSSecureCoding> {

	double _scaleFactor;
	unsigned long long _orientation;
	CGRect _frame;

}

@property (nonatomic,readonly) double scaleFactor;                          //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) unsigned long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryValue;
-(CGRect)frame;
-(double)scaleFactor;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)orientation;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithScaleFactor:(double)arg1 frame:(CGRect)arg2 orientation:(unsigned long long)arg3 ;
-(id)initWithScaleFactor:(double)arg1 width:(double)arg2 height:(double)arg3 orientation:(unsigned long long)arg4 ;
@end

