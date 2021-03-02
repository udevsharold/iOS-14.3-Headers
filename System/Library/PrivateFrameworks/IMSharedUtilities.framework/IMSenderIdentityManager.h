/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNGeminiManager;

@interface IMSenderIdentityManager : NSObject {

	CNGeminiManager* _geminiManager;

}

@property (nonatomic,retain) CNGeminiManager * geminiManager;              //@synthesize geminiManager=_geminiManager - In the implementation block
+(BOOL)isTUSenderIdentity:(id)arg1 equalToSubscriptionContext:(id)arg2 ;
+(id)sharedInstance;
-(id)init;
-(id)bestSenderIdentityForHandleID:(id)arg1 contact:(id)arg2 ;
-(id)contactPreferredSenderIdentityForHandleID:(id)arg1 contact:(id)arg2 ;
-(CNGeminiManager *)geminiManager;
-(id)bestSenderIdentityForGeminiHandle:(id)arg1 contact:(id)arg2 ;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
-(id)bestSenderIdentityForHandleIDs:(id)arg1 ;
@end
