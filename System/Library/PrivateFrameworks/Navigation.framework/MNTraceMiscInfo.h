/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNTraceMiscInfo : NSObject {

	NSString* _key;
	long long _intValue;
	double _doubleValue;
	NSString* _stringValue;

}

@property (nonatomic,copy) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long intValue;                //@synthesize intValue=_intValue - In the implementation block
@property (assign,nonatomic) double doubleValue;                //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,copy) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(double)doubleValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setIntValue:(long long)arg1 ;
-(NSString *)stringValue;
-(long long)intValue;
@end

