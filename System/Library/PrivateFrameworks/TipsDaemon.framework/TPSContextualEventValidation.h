/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsDaemon/TPSTargetingValidation.h>
#import <libobjc.A.dylib/TPSEventsProviderDelegate.h>

@class TPSContextualDuetEvent, NSString;

@interface TPSContextualEventValidation : TPSTargetingValidation <TPSEventsProviderDelegate> {

	TPSContextualDuetEvent* _event;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) TPSContextualDuetEvent * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(TPSContextualDuetEvent *)event;
-(id)completionHandler;
-(void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2 ;
-(void)setEvent:(TPSContextualDuetEvent *)arg1 ;
-(void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2 ;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
@end

