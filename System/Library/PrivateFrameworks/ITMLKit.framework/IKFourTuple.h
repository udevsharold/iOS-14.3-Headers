/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IKFourTuple : NSObject <NSCopying> {

	NSString* _namedStyle;
	long long _specifiedValueCount;
	double _values[4];

}

@property (nonatomic,readonly) NSString * namedStyle;                       //@synthesize namedStyle=_namedStyle - In the implementation block
@property (nonatomic,readonly) IKCornerRadii cornerRadiiValue; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsetsValue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)edgeInsetsValue;
-(IKCornerRadii)cornerRadiiValue;
-(NSString *)namedStyle;
-(id)initWithStyleString:(id)arg1 ;
-(id)initWithCornerRadii:(IKCornerRadii)arg1 ;
@end

