/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSActionResponse.h>

@class INIntentResponse, INIntentForwardingActionResponse;

@interface UISIntentForwardingActionResponse : BSActionResponse {

	INIntentResponse* _cachedIntentResponse;
	INIntentForwardingActionResponse* _cachedIntentForwardingActionResponse;

}

@property (nonatomic,readonly) INIntentResponse * intentResponse; 
@property (nonatomic,readonly) INIntentForwardingActionResponse * intentForwardingActionResponse; 
+(id)responseWithIntentResponse:(id)arg1 ;
+(id)responseWithIntentForwardingActionResponse:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(INIntentResponse *)intentResponse;
-(INIntentForwardingActionResponse *)intentForwardingActionResponse;
-(id)initWithIntentForwardingActionResponse:(id)arg1 ;
-(id)initWithIntentResponse:(id)arg1 ;
@end

