/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSAdjunctListItemProviding.h>

@protocol CSAdjunctItemHosting;
@class NSString, SBSLockScreenContentAction, UIView, NSMutableSet, UIViewController;

@interface CSAdjunctListItem : NSObject <CSAdjunctListItemProviding> {

	NSMutableSet* _actions;
	UIView* platterView;
	UIViewController*<CSAdjunctItemHosting> contentHost;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SBSLockScreenContentAction * action; 
@property (nonatomic,retain) UIView * platterView; 
@property (nonatomic,retain) UIViewController*<CSAdjunctItemHosting> contentHost; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlatterView:(UIView *)arg1 ;
-(id)init;
-(UIView *)platterView;
-(void)addAction:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isValid;
-(NSString *)identifier;
-(SBSLockScreenContentAction *)action;
-(void)removeAction:(id)arg1 ;
-(void)setContentHost:(UIViewController*<CSAdjunctItemHosting>)arg1 ;
-(UIViewController*<CSAdjunctItemHosting>)contentHost;
-(void)conformsToCSAdjunctListItemProviding;
@end
