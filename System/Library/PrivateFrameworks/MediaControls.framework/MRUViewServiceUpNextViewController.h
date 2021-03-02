/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MRUViewServiceViewController.h>

@class MPMediaControlsConfiguration, UILabel, NSString;

@interface MRUViewServiceUpNextViewController : UIViewController <MRUViewServiceViewController> {

	MPMediaControlsConfiguration* configuration;
	/*^block*/id dismissalBlock;
	UILabel* _placeholderLabel;

}

@property (nonatomic,retain) UILabel * placeholderLabel;                                //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) MPMediaControlsConfiguration * configuration; 
@property (nonatomic,copy) id dismissalBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dismissalBlock;
-(void)setDismissalBlock:(id)arg1 ;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(MPMediaControlsConfiguration *)configuration;
-(void)viewDidLayoutSubviews;
-(void)setConfiguration:(MPMediaControlsConfiguration *)arg1 ;
-(UILabel *)placeholderLabel;
-(void)viewDidLoad;
-(void)transitionToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
