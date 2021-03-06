/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSSNewsAnalyticsSessionManager, NSSNewsAnalyticsUserIDProvider;
@interface NSSNewsAnalyticsEventAnnotator : NSObject {

	id<NSSNewsAnalyticsSessionManager> _sessionManager;
	id<NSSNewsAnalyticsUserIDProvider> _userIDProvider;

}

@property (nonatomic,__weak,readonly) id<NSSNewsAnalyticsSessionManager> sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) id<NSSNewsAnalyticsUserIDProvider> userIDProvider;                     //@synthesize userIDProvider=_userIDProvider - In the implementation block
-(id)initWithSessionManager:(id)arg1 userIDProvider:(id)arg2 ;
-(id)init;
-(void)annotateEvent:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id<NSSNewsAnalyticsSessionManager>)sessionManager;
-(id<NSSNewsAnalyticsUserIDProvider>)userIDProvider;
@end

