/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSActivityReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSBinaryReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying> {

	BOOL _value;
	long long _valueType;

}

@property (assign,nonatomic) BOOL value;                       //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long valueType;              //@synthesize valueType=_valueType - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)valueType;
-(long long)compare:(id)arg1 ;
-(void)add:(id)arg1 ;
-(BOOL)value;
-(void)setValueType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)scalarMultiply:(double)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 ;
@end
