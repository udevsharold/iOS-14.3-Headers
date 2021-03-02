/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MRUNowPlayingTransportControlsViewDelegate;
@class MPCPlayerResponse, MRUVisualStylingProvider, MRUTransportButton;

@interface MRUNowPlayingTransportControlsView : UIView {

	BOOL _showTVButtons;
	id<MRUNowPlayingTransportControlsViewDelegate> _delegate;
	MPCPlayerResponse* _response;
	MRUVisualStylingProvider* _stylingProvider;
	long long _layout;
	MRUTransportButton* _tvRemoteButton;
	MRUTransportButton* _leftButton;
	MRUTransportButton* _middleButton;
	MRUTransportButton* _rightButton;
	MRUTransportButton* _languageOptionsButton;

}

@property (nonatomic,retain) MRUTransportButton * tvRemoteButton;                                         //@synthesize tvRemoteButton=_tvRemoteButton - In the implementation block
@property (nonatomic,retain) MRUTransportButton * leftButton;                                             //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) MRUTransportButton * middleButton;                                           //@synthesize middleButton=_middleButton - In the implementation block
@property (nonatomic,retain) MRUTransportButton * rightButton;                                            //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) MRUTransportButton * languageOptionsButton;                                  //@synthesize languageOptionsButton=_languageOptionsButton - In the implementation block
@property (assign,nonatomic,__weak) id<MRUNowPlayingTransportControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPCPlayerResponse * response;                                                //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                                  //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long layout;                                                            //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL showTVButtons;                                                          //@synthesize showTVButtons=_showTVButtons - In the implementation block
-(void)setLayout:(long long)arg1 ;
-(void)currentLocaleDidChangeNotification:(id)arg1 ;
-(void)setTvRemoteButton:(MRUTransportButton *)arg1 ;
-(MPCPlayerResponse *)response;
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)buttonHoldReleased:(id)arg1 ;
-(void)setMiddleButton:(MRUTransportButton *)arg1 ;
-(MRUTransportButton *)leftButton;
-(MRUTransportButton *)tvRemoteButton;
-(void)layoutSubviews;
-(void)updateVisibility;
-(void)setRightButton:(MRUTransportButton *)arg1 ;
-(long long)layout;
-(void)setLeftButton:(MRUTransportButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(MRUTransportButton *)languageOptionsButton;
-(void)setDelegate:(id<MRUNowPlayingTransportControlsViewDelegate>)arg1 ;
-(MRUTransportButton *)rightButton;
-(void)buttonHoldBegan:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MRUNowPlayingTransportControlsViewDelegate>)delegate;
-(void)setLanguageOptionsButton:(MRUTransportButton *)arg1 ;
-(MRUTransportButton *)middleButton;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)didSelectTVRemoteButton:(id)arg1 ;
-(void)didSelectedLeftButton:(id)arg1 ;
-(void)didSelectedMiddleButton:(id)arg1 ;
-(void)didSelectedRightButton:(id)arg1 ;
-(void)didSelectLanguageOptionsButton:(id)arg1 ;
-(void)updateResponse;
-(void)updateImageConfiguration;
-(void)setShowTVButtons:(BOOL)arg1 ;
-(BOOL)showTVButtons;
@end
