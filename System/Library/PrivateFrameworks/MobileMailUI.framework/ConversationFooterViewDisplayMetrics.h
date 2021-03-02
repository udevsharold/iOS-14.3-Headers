/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileMailUI/MobileMailUI-Structs.h>
@interface ConversationFooterViewDisplayMetrics : NSObject {

	BOOL _usePhoneLandscapeSymbolConfiguration;
	double _toolbarHeight;
	double _topToBaseline;

}

@property (assign,nonatomic) double toolbarHeight;                                   //@synthesize toolbarHeight=_toolbarHeight - In the implementation block
@property (assign,nonatomic) double topToBaseline;                                   //@synthesize topToBaseline=_topToBaseline - In the implementation block
@property (assign,nonatomic) BOOL usePhoneLandscapeSymbolConfiguration;              //@synthesize usePhoneLandscapeSymbolConfiguration=_usePhoneLandscapeSymbolConfiguration - In the implementation block
+(id)displayMetricsWithSafeAreaInsets:(UIEdgeInsets)arg1 interfaceOrientation:(long long)arg2 traitCollection:(id)arg3 ;
-(void)setUsePhoneLandscapeSymbolConfiguration:(BOOL)arg1 ;
-(void)setTopToBaseline:(double)arg1 ;
-(void)setToolbarHeight:(double)arg1 ;
-(double)toolbarHeight;
-(double)topToBaseline;
-(BOOL)usePhoneLandscapeSymbolConfiguration;
@end
