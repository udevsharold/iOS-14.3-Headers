/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@protocol MKOfficialAppViewDelegate;
@class UIImageView, UIView, _MKUILabel, UIButton, NSMutableArray, GEOAppStoreApp, UIImage;

@interface MKOfficialAppView : MKPlaceSectionRowView {

	UIImageView* _storeAppImageView;
	UIView* _labelContainerView;
	_MKUILabel* _appNameLabel;
	_MKUILabel* _descriptionLabel;
	UIButton* _punchOutButton;
	NSMutableArray* _constraintArray;
	BOOL _layoutShouldStack;
	BOOL _isAppInstalled;
	GEOAppStoreApp* _appStoreApp;
	UIImage* _image;
	id<MKOfficialAppViewDelegate> _delegate;

}

@property (nonatomic,retain) GEOAppStoreApp * appStoreApp;                               //@synthesize appStoreApp=_appStoreApp - In the implementation block
@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic,__weak) id<MKOfficialAppViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAppInstalled;                                        //@synthesize isAppInstalled=_isAppInstalled - In the implementation block
-(void)_commonInit;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)_updateFonts;
-(void)infoCardThemeChanged;
-(void)_createConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAppInstalled;
-(void)setDelegate:(id<MKOfficialAppViewDelegate>)arg1 ;
-(id<MKOfficialAppViewDelegate>)delegate;
-(GEOAppStoreApp *)appStoreApp;
-(void)_updateShouldLayoutStack;
-(void)_punchOutButtonSelected:(id)arg1 ;
-(void)_contentSizeDidChangeNotificationHandler;
-(void)updateButtonText;
-(void)_updateLabelText;
-(void)setAppStoreApp:(GEOAppStoreApp *)arg1 ;
-(void)setIsAppInstalled:(BOOL)arg1 ;
@end

