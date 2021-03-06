/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBPresentationObservationToken : NSObject <BSInvalidatable> {

	long long _state;
	/*^block*/id _willPresentHandler;
	/*^block*/id _didPresentHandler;
	/*^block*/id _willDismissHandler;
	/*^block*/id _didDismissHandler;

}

@property (nonatomic,readonly) long long state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id willPresentHandler;                   //@synthesize willPresentHandler=_willPresentHandler - In the implementation block
@property (nonatomic,copy) id didPresentHandler;                    //@synthesize didPresentHandler=_didPresentHandler - In the implementation block
@property (nonatomic,copy) id willDismissHandler;                   //@synthesize willDismissHandler=_willDismissHandler - In the implementation block
@property (nonatomic,copy) id didDismissHandler;                    //@synthesize didDismissHandler=_didDismissHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPresent;
-(void)willDismiss;
-(long long)state;
-(void)didDismiss;
-(id)didDismissHandler;
-(void)setDidDismissHandler:(id)arg1 ;
-(void)willPresent;
-(void)invalidate;
-(id)willPresentHandler;
-(void)setWillPresentHandler:(id)arg1 ;
-(id)didPresentHandler;
-(void)setDidPresentHandler:(id)arg1 ;
-(id)willDismissHandler;
-(void)setWillDismissHandler:(id)arg1 ;
@end

