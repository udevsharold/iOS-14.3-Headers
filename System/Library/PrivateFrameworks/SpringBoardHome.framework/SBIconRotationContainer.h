/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBIconViewProviding;
@class NSString, SBIconView, SBIcon;

@interface SBIconRotationContainer : UIView {

	BOOL _offscreen;
	NSString* _location;
	long long _transitionAnimation;
	SBIconView* _startView;
	SBIconView* _endView;
	id<SBIconViewProviding> _iconViewProvider;
	SBIconCoordinate _coordinate;

}

@property (nonatomic,readonly) SBIconView * startView;                              //@synthesize startView=_startView - In the implementation block
@property (nonatomic,readonly) SBIconView * endView;                                //@synthesize endView=_endView - In the implementation block
@property (nonatomic,retain) id<SBIconViewProviding> iconViewProvider;              //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (nonatomic,readonly) SBIcon * startIcon; 
@property (nonatomic,readonly) SBIcon * endIcon; 
@property (nonatomic,readonly) SBIconCoordinate coordinate;                         //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long transitionAnimation;                       //@synthesize transitionAnimation=_transitionAnimation - In the implementation block
@property (getter=isOffscreen,nonatomic,readonly) BOOL offscreen;                   //@synthesize offscreen=_offscreen - In the implementation block
-(void)setIconViewProvider:(id<SBIconViewProviding>)arg1 ;
-(SBIcon *)endIcon;
-(SBIconView *)endView;
-(void)prepareToTransition;
-(void)performTransition;
-(id)initWithFrame:(CGRect)arg1 startIcon:(id)arg2 endIcon:(id)arg3 iconViewProvider:(id)arg4 coordinate:(SBIconCoordinate)arg5 location:(id)arg6 transitionAnimation:(long long)arg7 offscreen:(BOOL)arg8 ;
-(void)concludeTransition;
-(SBIconView *)startView;
-(SBIcon *)startIcon;
-(BOOL)isOffscreen;
-(id)addIconViewForIcon:(id)arg1 configurationOptions:(unsigned long long)arg2 ;
-(long long)transitionAnimation;
-(NSString *)location;
-(id<SBIconViewProviding>)iconViewProvider;
-(SBIconCoordinate)coordinate;
-(void)layoutSubviews;
@end
