/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@interface CSDashBoardQuickActionsButtonSettings : PTSettings {

	BOOL _showsButtons;
	BOOL _colorsBackground;
	double _topOutset;
	double _leadingOutset;
	double _trailingOutset;
	double _bottomOutset;

}

@property (assign,nonatomic) BOOL showsButtons;                  //@synthesize showsButtons=_showsButtons - In the implementation block
@property (assign,nonatomic) BOOL colorsBackground;              //@synthesize colorsBackground=_colorsBackground - In the implementation block
@property (assign,nonatomic) double topOutset;                   //@synthesize topOutset=_topOutset - In the implementation block
@property (assign,nonatomic) double leadingOutset;               //@synthesize leadingOutset=_leadingOutset - In the implementation block
@property (assign,nonatomic) double trailingOutset;              //@synthesize trailingOutset=_trailingOutset - In the implementation block
@property (assign,nonatomic) double bottomOutset;                //@synthesize bottomOutset=_bottomOutset - In the implementation block
+(id)settingsControllerModule;
-(double)topOutset;
-(void)setDefaultValues;
-(void)setColorsBackground:(BOOL)arg1 ;
-(void)setTopOutset:(double)arg1 ;
-(double)bottomOutset;
-(double)trailingOutset;
-(void)setTrailingOutset:(double)arg1 ;
-(void)setLeadingOutset:(double)arg1 ;
-(void)setShowsButtons:(BOOL)arg1 ;
-(BOOL)showsButtons;
-(double)leadingOutset;
-(BOOL)colorsBackground;
-(void)setBottomOutset:(double)arg1 ;
@end

