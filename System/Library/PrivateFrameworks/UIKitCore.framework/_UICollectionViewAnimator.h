/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UICollectionViewAnimationContext;
@class _UICollectionViewAnimationContext;

@interface _UICollectionViewAnimator : NSObject <NSCopying> {

	id<_UICollectionViewAnimationContext> _animationContext;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) id handler;                                                      //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) _UICollectionViewAnimationContext * animationContext; 
-(_UICollectionViewAnimationContext *)animationContext;
-(id)handler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAnimationContext:(_UICollectionViewAnimationContext *)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
@end
