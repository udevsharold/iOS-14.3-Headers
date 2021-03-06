/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BridgePreferences-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, PBBridgeAssetsManager, BPSWatchView, UIImageView;

@interface BPSRemoteWatchView : UIView {

	NSString* _advertisingName;
	PBBridgeAssetsManager* _assetManager;
	BPSWatchView* _watch;
	UIImageView* _watchScreen;
	unsigned long long _style;

}

@property (nonatomic,copy) NSString * advertisingName;                          //@synthesize advertisingName=_advertisingName - In the implementation block
@property (nonatomic,retain) PBBridgeAssetsManager * assetManager;              //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) BPSWatchView * watch;                              //@synthesize watch=_watch - In the implementation block
@property (nonatomic,retain) UIImageView * watchScreen;                         //@synthesize watchScreen=_watchScreen - In the implementation block
@property (assign,nonatomic) unsigned long long style;                          //@synthesize style=_style - In the implementation block
-(PBBridgeAssetsManager *)assetManager;
-(void)setAssetManager:(PBBridgeAssetsManager *)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(BPSWatchView *)watch;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setWatch:(BPSWatchView *)arg1 ;
-(void)setAdvertisingName:(id)arg1 andStyle:(unsigned long long)arg2 ;
-(void)setAdvertisingName:(NSString *)arg1 ;
-(NSString *)advertisingName;
-(UIImageView *)watchScreen;
-(void)setWatchScreen:(UIImageView *)arg1 ;
@end

