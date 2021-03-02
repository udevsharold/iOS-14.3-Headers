/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UISaveToCameraRollActivity.h>

@protocol ContentRepresentationHandlingDelegate;
@interface MessageSaveToCameraRollActivity : UISaveToCameraRollActivity {

	id<ContentRepresentationHandlingDelegate> _delegate;
	long long _context;

}

@property (assign,nonatomic,__weak) id<ContentRepresentationHandlingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long context;                                                      //@synthesize context=_context - In the implementation block
-(id)activityType;
-(id)init;
-(id)activityImage;
-(id)_beforeActivity;
-(void)setContext:(long long)arg1 ;
-(void)setDelegate:(id<ContentRepresentationHandlingDelegate>)arg1 ;
-(long long)context;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id<ContentRepresentationHandlingDelegate>)delegate;
-(void)_prepareWithActivityItems:(id)arg1 ;
-(id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2 ;
@end
