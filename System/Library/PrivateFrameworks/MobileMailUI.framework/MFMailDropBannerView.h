/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFMessageHeaderViewBlock.h>

@protocol MFMailDropBannerDelegate;
@class UILabel, UIButton, MFProgressView, NSLayoutConstraint, EMMailDropMetadata;

@interface MFMailDropBannerView : MFMessageHeaderViewBlock {

	BOOL _hasLoaded;
	UILabel* _expirationLabel;
	UILabel* _downloadLabel;
	UIButton* _downloadIcon;
	MFProgressView* _progressView;
	NSLayoutConstraint* _iconWrapperWidth;
	NSLayoutConstraint* _labelFirstBaseline;
	NSLayoutConstraint* _expirationFirstBaseline;
	NSLayoutConstraint* _expirationBottom;
	EMMailDropMetadata* _metaData;
	unsigned long long _bannerState;
	double _downloadProgress;
	id<MFMailDropBannerDelegate> _delegate;

}

@property (nonatomic,retain) EMMailDropMetadata * metaData;                             //@synthesize metaData=_metaData - In the implementation block
@property (assign,nonatomic) unsigned long long bannerState;                            //@synthesize bannerState=_bannerState - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                   //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailDropBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateConstraints;
-(void)setMetaData:(EMMailDropMetadata *)arg1 ;
-(double)downloadProgress;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(EMMailDropMetadata *)metaData;
-(void)startDownload:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MFMailDropBannerDelegate>)arg1 ;
-(void)setDownloadProgress:(double)arg1 ;
-(id<MFMailDropBannerDelegate>)delegate;
-(BOOL)shouldPresent;
-(void)_setupDownloadLabel;
-(void)_setupExpirationLabel;
-(void)_setupDownloadIcon;
-(unsigned long long)bannerState;
-(BOOL)_hasDataLocally;
-(void)setBannerState:(unsigned long long)arg1 ;
-(BOOL)_shouldDisplayProgress;
-(void)setSeparatorIsHidden:(BOOL)arg1 ;
@end
