/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@interface VUIFocusableCollectionViewCell : UICollectionViewCell {

	BOOL _allowsFocus;

}

@property (assign,nonatomic) BOOL allowsFocus;              //@synthesize allowsFocus=_allowsFocus - In the implementation block
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(BOOL)allowsFocus;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateBackgroundAndHighlightColor;
@end
