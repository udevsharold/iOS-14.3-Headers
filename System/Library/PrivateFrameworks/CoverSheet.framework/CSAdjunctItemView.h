/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@protocol PLPlatter, CSAdjunctItemHosting;
@class NSString, UIView;

@interface CSAdjunctItemView : UIView <MTMaterialGrouping> {

	long long _recipe;
	UIView*<PLPlatter> _platterView;
	BOOL _isContentHostPlatterView;
	NSString* _materialGroupNameBase;
	id<CSAdjunctItemHosting> _contentHost;
	CGSize _sizeToMimic;

}

@property (assign,nonatomic) CGSize sizeToMimic;                                       //@synthesize sizeToMimic=_sizeToMimic - In the implementation block
@property (assign,nonatomic,__weak) id<CSAdjunctItemHosting> contentHost;              //@synthesize contentHost=_contentHost - In the implementation block
@property (nonatomic,copy) NSString * materialGroupNameBase;                           //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(id)initWithRecipe:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeToMimic;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)materialGroupNameBase;
-(void)setSizeToMimic:(CGSize)arg1 ;
-(void)setContentHost:(id<CSAdjunctItemHosting>)arg1 ;
-(id<CSAdjunctItemHosting>)contentHost;
-(void)_updateSizeToMimic;
-(void)_setPlatterView:(id)arg1 ;
@end
