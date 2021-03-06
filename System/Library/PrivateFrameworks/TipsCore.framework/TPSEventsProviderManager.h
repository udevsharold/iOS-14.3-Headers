/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TPSEventsProviderDelegate.h>

@protocol TPSDEventsProviderManagerDelegate;
@class TPSDuetEventsProvider, TPSPortraitEventsProvider, TPSContentStatusEventsProvider, NSString;

@interface TPSEventsProviderManager : NSObject <TPSEventsProviderDelegate> {

	TPSDuetEventsProvider* _duetEventsProvider;
	TPSPortraitEventsProvider* _portraitEventsProvider;
	TPSContentStatusEventsProvider* _contentStatusEventsProvider;
	id<TPSDEventsProviderManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TPSDEventsProviderManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(id)init;
-(void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2 ;
-(void)registerCallbackForEvents:(id)arg1 type:(long long)arg2 ;
-(void)registerWakingCallbackForEvents:(id)arg1 type:(long long)arg2 clientIdentifier:(id)arg3 ;
-(void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2 ;
-(long long)_dataTypeForDataProvider:(id)arg1 ;
-(void)setDelegate:(id<TPSDEventsProviderManagerDelegate>)arg1 ;
-(void)queryEvents:(id)arg1 type:(long long)arg2 ;
-(id<TPSDEventsProviderManagerDelegate>)delegate;
@end

