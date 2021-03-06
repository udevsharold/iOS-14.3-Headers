/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SAHAAttributeValue;

@interface HMDAssistantCharacteristicTuple : NSObject {

	NSString* _attribute;
	SAHAAttributeValue* _value;

}

@property (nonatomic,readonly) NSString * attribute;                    //@synthesize attribute=_attribute - In the implementation block
@property (nonatomic,readonly) SAHAAttributeValue * value;              //@synthesize value=_value - In the implementation block
-(NSString *)attribute;
-(SAHAAttributeValue *)value;
-(id)init;
-(id)initWithAttribute:(id)arg1 value:(id)arg2 ;
@end

