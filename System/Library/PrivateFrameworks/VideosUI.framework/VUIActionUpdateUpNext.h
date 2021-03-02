/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionUpdateUpNext : VUIAction {

	BOOL _confirmationShouldWaitCompletion;
	NSString* _state;
	NSString* _itemID;

}

@property (nonatomic,retain) NSString * state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * itemID;                                  //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) BOOL confirmationShouldWaitCompletion;              //@synthesize confirmationShouldWaitCompletion=_confirmationShouldWaitCompletion - In the implementation block
-(NSString *)itemID;
-(NSString *)state;
-(id)initWithContextData:(id)arg1 ;
-(void)setItemID:(NSString *)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)confirmationShouldWaitCompletion;
-(void)setConfirmationShouldWaitCompletion:(BOOL)arg1 ;
@end
