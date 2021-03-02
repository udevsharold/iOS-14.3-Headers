/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagProtocol;
@class NSString;

@interface AMSUIPaymentVerificationMetrics : NSObject {

	id<AMSBagProtocol> _bag;
	NSString* _displayReason;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSString * displayReason;              //@synthesize displayReason=_displayReason - In the implementation block
+(id)_event;
+(id)_metricsInstanceWithBag:(id)arg1 ;
-(id)initWithBag:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)flushEvents;
-(void)setDisplayReason:(NSString *)arg1 ;
-(void)enqueueEventWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3 ;
-(void)enqueueEventWithPageId:(id)arg1 displayReason:(id)arg2 ;
-(id)_propertiesWithPageId:(id)arg1 displayReason:(id)arg2 ;
-(id)_propertiesWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3 ;
-(NSString *)displayReason;
@end
