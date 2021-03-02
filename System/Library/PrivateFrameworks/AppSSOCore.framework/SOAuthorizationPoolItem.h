/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SOAuthorizationCoreDelegate;
@class SOAuthorizationCore;

@interface SOAuthorizationPoolItem : NSObject {

	SOAuthorizationCore* _authorization;
	id<SOAuthorizationCoreDelegate> _delegate;

}

@property (nonatomic,readonly) SOAuthorizationCore * authorization;                   //@synthesize authorization=_authorization - In the implementation block
@property (nonatomic,readonly) id<SOAuthorizationCoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(SOAuthorizationCore *)authorization;
-(id<SOAuthorizationCoreDelegate>)delegate;
-(id)initWithAuthorization:(id)arg1 delegate:(id)arg2 ;
@end
