/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSString, UIImage, NSArray, NSLayoutConstraint;

@interface CPUITransportControlView : UIView {

	BOOL _progressActive;
	double _buttonHeight;
	double _buttonSpacing;
	UIButton* _leftButton;
	UIButton* _playPauseButton;
	UIButton* _fastForwardButton;
	NSString* _playButtonImageName;
	NSString* _pauseButtonImageName;
	UIImage* _defaultLeftButtonImage;
	UIImage* _defaultFastForwardButtonImage;
	UIImage* _playImage;
	UIImage* _pauseImage;
	NSArray* _constraints;
	NSLayoutConstraint* _containerHeightConstraint;

}

@property (nonatomic,retain) UIImage * playImage;                                         //@synthesize playImage=_playImage - In the implementation block
@property (nonatomic,retain) UIImage * pauseImage;                                        //@synthesize pauseImage=_pauseImage - In the implementation block
@property (nonatomic,retain) UIImage * defaultLeftButtonImage;                            //@synthesize defaultLeftButtonImage=_defaultLeftButtonImage - In the implementation block
@property (nonatomic,retain) UIImage * defaultFastForwardButtonImage;                     //@synthesize defaultFastForwardButtonImage=_defaultFastForwardButtonImage - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                       //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerHeightConstraint;              //@synthesize containerHeightConstraint=_containerHeightConstraint - In the implementation block
@property (assign,nonatomic) double buttonHeight;                                         //@synthesize buttonHeight=_buttonHeight - In the implementation block
@property (assign,nonatomic) double buttonSpacing;                                        //@synthesize buttonSpacing=_buttonSpacing - In the implementation block
@property (nonatomic,readonly) UIButton * leftButton;                                     //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * playPauseButton;                                //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,readonly) UIButton * fastForwardButton;                              //@synthesize fastForwardButton=_fastForwardButton - In the implementation block
@property (assign,nonatomic) BOOL progressActive;                                         //@synthesize progressActive=_progressActive - In the implementation block
@property (nonatomic,retain) NSString * playButtonImageName;                              //@synthesize playButtonImageName=_playButtonImageName - In the implementation block
@property (nonatomic,retain) NSString * pauseButtonImageName;                             //@synthesize pauseButtonImageName=_pauseButtonImageName - In the implementation block
-(void)setConstraints:(NSArray *)arg1 ;
-(void)updateConstraints;
-(double)buttonHeight;
-(void)setButtonHeight:(double)arg1 ;
-(void)setButtonSpacing:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)buttonSpacing;
-(NSArray *)constraints;
-(UIButton *)leftButton;
-(UIImage *)pauseImage;
-(void)setupConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)playPauseButton;
-(UIImage *)playImage;
-(void)setPlayImage:(UIImage *)arg1 ;
-(void)setPauseImage:(UIImage *)arg1 ;
-(void)setPauseButtonImageName:(NSString *)arg1 ;
-(void)setPlayButtonImageName:(NSString *)arg1 ;
-(UIImage *)defaultLeftButtonImage;
-(UIImage *)defaultFastForwardButtonImage;
-(void)_updateProgressActive;
-(void)setProgressActive:(BOOL)arg1 ;
-(UIButton *)fastForwardButton;
-(BOOL)progressActive;
-(NSString *)playButtonImageName;
-(NSString *)pauseButtonImageName;
-(void)setDefaultLeftButtonImage:(UIImage *)arg1 ;
-(void)setDefaultFastForwardButtonImage:(UIImage *)arg1 ;
-(NSLayoutConstraint *)containerHeightConstraint;
-(void)setContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

