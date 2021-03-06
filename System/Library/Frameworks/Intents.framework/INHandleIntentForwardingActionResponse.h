/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentForwardingActionResponse.h>

@class INIntentResponse, NSData, NSSet;

@interface INHandleIntentForwardingActionResponse : INIntentForwardingActionResponse {

	INIntentResponse* _intentResponse;
	NSData* _launchContextActivityData;
	NSSet* _cacheItems;

}

@property (nonatomic,readonly) INIntentResponse * intentResponse;               //@synthesize intentResponse=_intentResponse - In the implementation block
@property (nonatomic,readonly) NSData * launchContextActivityData;              //@synthesize launchContextActivityData=_launchContextActivityData - In the implementation block
@property (nonatomic,readonly) NSSet * cacheItems;                              //@synthesize cacheItems=_cacheItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)cacheItems;
-(id)initWithIntentResponse:(id)arg1 launchContextActivityData:(id)arg2 cacheItems:(id)arg3 error:(id)arg4 ;
-(NSData *)launchContextActivityData;
-(id)initWithCoder:(id)arg1 ;
-(INIntentResponse *)intentResponse;
-(void)encodeWithCoder:(id)arg1 ;
@end

