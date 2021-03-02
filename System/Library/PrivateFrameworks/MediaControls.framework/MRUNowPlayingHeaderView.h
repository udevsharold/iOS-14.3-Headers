/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class MRUArtworkView, MRUNowPlayingRoutingButton, MRUTransportButton, MRUVisualStylingProvider, MRUNowPlayingLabelView, MPAVRoute, NSString;

@interface MRUNowPlayingHeaderView : UIControl <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate> {

	BOOL _showArtworkView;
	BOOL _showTransportButton;
	BOOL _showRoutingButton;
	BOOL _useArtworkOverrideFrame;
	MRUArtworkView* _artworkView;
	MRUNowPlayingRoutingButton* _routingButton;
	MRUTransportButton* _transportButton;
	long long _layout;
	long long _context;
	MRUVisualStylingProvider* _stylingProvider;
	double _textCenterOffsetY;
	MRUNowPlayingLabelView* _labelView;
	CGRect _artworkOverrideFrame;

}

@property (nonatomic,retain) MRUNowPlayingLabelView * labelView;                        //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,readonly) MRUArtworkView * artworkView;                            //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,readonly) MRUNowPlayingRoutingButton * routingButton;              //@synthesize routingButton=_routingButton - In the implementation block
@property (nonatomic,readonly) MRUTransportButton * transportButton;                    //@synthesize transportButton=_transportButton - In the implementation block
@property (nonatomic,retain) MPAVRoute * route; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (assign,nonatomic) BOOL showPlaceholderText; 
@property (assign,nonatomic) BOOL showArtworkView;                                      //@synthesize showArtworkView=_showArtworkView - In the implementation block
@property (assign,nonatomic) BOOL showTransportButton;                                  //@synthesize showTransportButton=_showTransportButton - In the implementation block
@property (assign,nonatomic) BOOL showRoutingButton;                                    //@synthesize showRoutingButton=_showRoutingButton - In the implementation block
@property (assign,getter=isMarqueeEnabled,nonatomic) BOOL marqueeEnabled; 
@property (assign,nonatomic) long long layout;                                          //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) long long context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) double textCenterOffsetY;                                  //@synthesize textCenterOffsetY=_textCenterOffsetY - In the implementation block
@property (assign,nonatomic) BOOL useArtworkOverrideFrame;                              //@synthesize useArtworkOverrideFrame=_useArtworkOverrideFrame - In the implementation block
@property (assign,nonatomic) CGRect artworkOverrideFrame;                               //@synthesize artworkOverrideFrame=_artworkOverrideFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRoute:(MPAVRoute *)arg1 ;
-(void)setLayout:(long long)arg1 ;
-(NSString *)subtitle;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(MRUNowPlayingLabelView *)labelView;
-(void)updateVisualStyling;
-(MPAVRoute *)route;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(NSString *)placeholderText;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)updateArtworkStyle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setContext:(long long)arg1 ;
-(BOOL)isMarqueeEnabled;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateVisibility;
-(MRUNowPlayingRoutingButton *)routingButton;
-(long long)layout;
-(MRUArtworkView *)artworkView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLabelView:(MRUNowPlayingLabelView *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(long long)context;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(MRUTransportButton *)transportButton;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(BOOL)showPlaceholderText;
-(void)setShowPlaceholderText:(BOOL)arg1 ;
-(void)setShowTransportButton:(BOOL)arg1 ;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)setTextCenterOffsetY:(double)arg1 ;
-(void)setArtworkOverrideFrame:(CGRect)arg1 ;
-(void)setShowArtworkView:(BOOL)arg1 ;
-(void)setUseArtworkOverrideFrame:(BOOL)arg1 ;
-(void)setShowRoutingButton:(BOOL)arg1 ;
-(double)textInsetForSize:(CGSize)arg1 ;
-(BOOL)showArtworkView;
-(BOOL)showTransportButton;
-(BOOL)showRoutingButton;
-(double)textCenterOffsetY;
-(BOOL)useArtworkOverrideFrame;
-(CGRect)artworkOverrideFrame;
@end
