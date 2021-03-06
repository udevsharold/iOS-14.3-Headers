/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface MCLVariantGroupView : UIView {

	NSMutableArray* _buttons;
	NSMutableArray* _buttonConstraints;
	long long _selectedIndex;
	BOOL _actionVariant;
	Class _buttonClass;
	long long _buttonType;
	long long _variantCount;
	long long _variantsPerLine;

}

@property (nonatomic,retain) Class buttonClass;                      //@synthesize buttonClass=_buttonClass - In the implementation block
@property (assign,nonatomic) long long buttonType;                   //@synthesize buttonType=_buttonType - In the implementation block
@property (assign,nonatomic) long long variantCount;                 //@synthesize variantCount=_variantCount - In the implementation block
@property (assign,nonatomic) long long variantsPerLine;              //@synthesize variantsPerLine=_variantsPerLine - In the implementation block
@property (assign,nonatomic) BOOL actionVariant;                     //@synthesize actionVariant=_actionVariant - In the implementation block
-(long long)buttonType;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)clearVariants;
-(Class)buttonClass;
-(void)setButtonType:(long long)arg1 ;
-(id)createVariantButton:(Class)arg1 type:(long long)arg2 ;
-(void)selectVariant:(id)arg1 ;
-(void)selectItemAtIndex:(long long)arg1 ;
-(void)setButtonClass:(Class)arg1 ;
-(long long)variantCount;
-(void)setVariantCount:(long long)arg1 ;
-(long long)variantsPerLine;
-(void)setVariantsPerLine:(long long)arg1 ;
-(BOOL)actionVariant;
-(void)setActionVariant:(BOOL)arg1 ;
@end

