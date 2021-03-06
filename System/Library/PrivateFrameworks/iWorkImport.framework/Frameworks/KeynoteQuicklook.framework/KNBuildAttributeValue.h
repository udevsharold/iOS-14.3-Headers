/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSKit/TSKSosBase.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TSDPathSource, TSUColor;

@interface KNBuildAttributeValue : TSKSosBase <NSCopying> {

	int _integerValue;
	double _doubleValue;
	BOOL _boolValue;
	NSString* _stringValue;
	TSDPathSource* _pathSourceValue;
	TSUColor* _colorValue;
	BOOL _definedIntegerValue;
	BOOL _definedDoubleValue;
	BOOL _definedBoolValue;
	BOOL _definedStringValue;
	BOOL _definedPathSourceValue;
	BOOL _definedColorValue;

}

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) id<NSObject> objectValue; 
@property (nonatomic,readonly) long long integerValue; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) TSDPathSource * pathSourceValue; 
@property (nonatomic,readonly) TSUColor * colorValue; 
+(id)valueWithColor:(id)arg1 ;
+(id)valueWithInteger:(long long)arg1 ;
+(id)valueWithDouble:(double)arg1 ;
+(id)valueWithBool:(BOOL)arg1 ;
+(id)valueWithString:(id)arg1 ;
+(id)emptyValue;
+(id)valueWithPathSource:(id)arg1 ;
-(id<NSObject>)objectValue;
-(long long)integerValue;
-(BOOL)isEmpty;
-(double)doubleValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(id)initWithStringValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBoolValue:(BOOL)arg1 ;
-(id)initWithColorValue:(id)arg1 ;
-(TSUColor *)colorValue;
-(id)initWithPathSourceValue:(id)arg1 ;
-(id)initWithIntegerValue:(long long)arg1 ;
-(id)initWithDoubleValue:(double)arg1 ;
-(BOOL)p_attributesAreEmpty;
-(TSDPathSource *)pathSourceValue;
@end

