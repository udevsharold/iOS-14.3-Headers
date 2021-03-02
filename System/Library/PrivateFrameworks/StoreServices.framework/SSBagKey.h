/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSArray;

@interface SSBagKey : NSObject {

	id<NSObject> _defaultValue;
	NSArray* _stringRepresentation;
	unsigned long long _valueType;

}

@property (nonatomic,readonly) id<NSObject> defaultValue;                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) NSArray * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;                //@synthesize valueType=_valueType - In the implementation block
-(unsigned long long)valueType;
-(NSArray *)stringRepresentation;
-(id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2 ;
-(id)valueFromDictionary:(id)arg1 ;
-(id<NSObject>)defaultValue;
-(id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
@end
