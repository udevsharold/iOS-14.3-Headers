/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@class IKBadgeElement, IKColor;

@interface IKTextBadgeAttachment : NSTextAttachment {

	IKBadgeElement* _badge;
	IKColor* _tintColor;

}

@property (getter=tv_isResolving,nonatomic,readonly) BOOL tv_resolving; 
@property (setter=tv_setCurrentTintColor:,nonatomic,retain) IKColor * tv_currentTintColor; 
@property (setter=tv_setHighlightColor:,nonatomic,retain) IKColor * tv_highlightColor; 
@property (nonatomic,__weak,readonly) IKBadgeElement * badge;                                           //@synthesize badge=_badge - In the implementation block
@property (nonatomic,retain) IKColor * tintColor;                                                       //@synthesize tintColor=_tintColor - In the implementation block
-(id)tv_imageProxy;
-(IKColor *)tv_highlightColor;
-(void)tv_resolveWithTextLayoutDirection:(long long)arg1 layoutObserver:(/*^block*/id)arg2 ;
-(BOOL)tv_isResolving;
-(IKColor *)tv_currentTintColor;
-(void)tv_setResolving:(BOOL)arg1 ;
-(void)tv_setImage:(id)arg1 ;
-(void)tv_setImageProxy:(id)arg1 ;
-(void)tv_setHighlightColor:(id)arg1 ;
-(void)tv_setCurrentTintColor:(id)arg1 ;
-(void)setTintColor:(IKColor *)arg1 ;
-(IKColor *)tintColor;
-(IKBadgeElement *)badge;
-(id)initWithBadgeElement:(id)arg1 ;
@end

