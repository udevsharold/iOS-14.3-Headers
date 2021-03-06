/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InAppMessages/IAMMessageGroup.h>

@protocol AMSBagProtocol;
@class NSDictionary;

@interface AMSUIMessageGroup : IAMMessageGroup {

	NSDictionary* _clientData;
	NSDictionary* _clientMetricsOverlay;
	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                           //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSDictionary * clientData;                        //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,retain) NSDictionary * clientMetricsOverlay;              //@synthesize clientMetricsOverlay=_clientMetricsOverlay - In the implementation block
-(NSDictionary *)clientData;
-(id)init;
-(id)initWithBag:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(NSDictionary *)clientMetricsOverlay;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)_viewControllerForType:(long long)arg1 account:(id)arg2 URL:(id)arg3 sidepack:(id)arg4 metrics:(id)arg5 ;
-(void)viewControllerForModalMessagePresentation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setClientMetricsOverlay:(NSDictionary *)arg1 ;
-(void)setClientData:(NSDictionary *)arg1 ;
@end

