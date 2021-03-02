/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NULoadingDelegate.h>

@class NSArray;

@interface NewsArticles.RSSArticleViewController : UIViewController <NULoadingDelegate> {

	 identifier;
	 article;
	 contentContext;
	 contentViewController;
	 contentBackgroundColor;
	 observableScrollView;
	 styler;
	 eventHandler;
	 keyCommandManager;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
-(NSArray *)keyCommands;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLoad;
-(void)handleKeyCommandWithKeyCommand:(id)arg1 ;
-(void)loadingDidFinishWithError:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
