/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFFieldDetectSessionCallbacks.h>

@protocol NFFieldDetectSessionDelegate;
@class NSString;

@interface NFFieldDetectSession : NFSession <NFFieldDetectSessionCallbacks> {

	id<NFFieldDetectSessionDelegate> _delegate;
	BOOL _fieldNotificationSent;

}

@property (assign) id<NFFieldDetectSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didEndUnexpectedly;
-(void)setDelegate:(id<NFFieldDetectSessionDelegate>)arg1 ;
-(id<NFFieldDetectSessionDelegate>)delegate;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
@end

