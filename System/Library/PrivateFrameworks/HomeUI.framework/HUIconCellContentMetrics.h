/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUIconCellContentMetrics : NSObject {

	CGSize _iconSize;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) CGSize iconSize;                        //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
+(id)compactMetrics;
+(id)defaultMetrics;
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
@end

