/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAP2EncodedCharacteristicResponse.h>
#import <libobjc.A.dylib/HAP2EncodedEnableNotificationResponse.h>
@class NSSet;


@protocol HAP2EncodedEnableNotificationResponse <HAP2EncodedCharacteristicResponse>
@property (nonatomic,readonly) NSSet * updatedValues; 
@required
-(NSSet *)updatedValues;

@end


@class NSSet, NSArray, NSString;

@interface HAP2EncodedEnableNotificationResponse : HAP2EncodedCharacteristicResponse <HAP2EncodedEnableNotificationResponse> {

	NSSet* _updatedValues;
	NSSet* _valueResponses;

}

@property (nonatomic,readonly) NSSet * updatedValues;                          //@synthesize updatedValues=_updatedValues - In the implementation block
@property (nonatomic,readonly) NSArray * characteristics; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNotificationResponses:(id)arg1 updatedValues:(id)arg2 ;
-(NSSet *)updatedValues;
-(id)initWithNotificationResponses:(id)arg1 ;
@end

