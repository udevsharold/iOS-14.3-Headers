/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface PRXCrossDissolveTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	/*^block*/id _additionalAnimations;
	long long _cardStyle;
	CGSize _maxSize;

}

@property (nonatomic,copy) id additionalAnimations;                 //@synthesize additionalAnimations=_additionalAnimations - In the implementation block
@property (assign,nonatomic) long long cardStyle;                   //@synthesize cardStyle=_cardStyle - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                        //@synthesize maxSize=_maxSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(long long)cardStyle;
-(void)setCardStyle:(long long)arg1 ;
-(CGSize)maxSize;
-(double)transitionDuration:(id)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setAdditionalAnimations:(id)arg1 ;
-(id)additionalAnimations;
@end
