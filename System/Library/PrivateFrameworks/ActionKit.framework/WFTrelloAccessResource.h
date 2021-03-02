/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFAccountAccessResource.h>

@class WFWebAuthenticationSessionPresentationContext;

@interface WFTrelloAccessResource : WFAccountAccessResource {

	WFWebAuthenticationSessionPresentationContext* _presentationContext;

}

@property (nonatomic,retain) WFWebAuthenticationSessionPresentationContext * presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
-(Class)accountClass;
-(void)setPresentationContext:(WFWebAuthenticationSessionPresentationContext *)arg1 ;
-(WFWebAuthenticationSessionPresentationContext *)presentationContext;
-(id)associatedAppIdentifier;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)authorizationURLWithCallbackURL:(id)arg1 ;
@end
