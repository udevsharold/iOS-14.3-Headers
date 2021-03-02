/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TIAnalyticsFieldSpec;

@interface FieldSpecTuple : NSObject {

	NSString* _key;
	TIAnalyticsFieldSpec* _fieldSpec;

}

@property (nonatomic,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) TIAnalyticsFieldSpec * fieldSpec;              //@synthesize fieldSpec=_fieldSpec - In the implementation block
+(id)tupleWithKey:(id)arg1 eventSpec:(id)arg2 ;
-(NSString *)key;
-(TIAnalyticsFieldSpec *)fieldSpec;
@end
