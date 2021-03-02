/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <DocumentManagerUICore/DOCFittingImageView.h>

@interface DOCBorderedFittingImageView : DOCFittingImageView {

	BOOL _addDecoration;

}

@property (assign,nonatomic) BOOL addDecoration;              //@synthesize addDecoration=_addDecoration - In the implementation block
-(void)layoutSubviews;
-(void)setFittingSize:(CGSize)arg1 ;
-(void)updateImage:(id)arg1 addDecoration:(BOOL)arg2 ;
-(void)setAddDecoration:(BOOL)arg1 ;
-(BOOL)addDecoration;
@end
