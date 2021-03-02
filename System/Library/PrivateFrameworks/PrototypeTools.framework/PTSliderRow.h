/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@interface PTSliderRow : PTSRow {

	double _minValue;
	double _maxValue;

}

@property (assign,nonatomic) double minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;              //@synthesize maxValue=_maxValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)tableViewCellClass;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)minValue:(double)arg1 maxValue:(double)arg2 ;
-(double)minValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(double)maxValue;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMinValue:(double)arg1 ;
@end
