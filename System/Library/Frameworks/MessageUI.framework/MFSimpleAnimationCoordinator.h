/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MFSimpleAnimationCoordinator : NSObject {

	BOOL _animated;
	NSMutableArray* _animations;
	NSMutableArray* _completions;

}

@property (nonatomic,retain) NSMutableArray * animations;                  //@synthesize animations=_animations - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                 //@synthesize completions=_completions - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;              //@synthesize animated=_animated - In the implementation block
-(BOOL)isAnimated;
-(id)init;
-(void)setAnimated:(BOOL)arg1 ;
-(NSMutableArray *)animations;
-(void)setAnimations:(NSMutableArray *)arg1 ;
-(id)initCoordinatorAnimated:(BOOL)arg1 ;
-(void)playAnimations;
-(void)playCompletions:(BOOL)arg1 ;
-(void)animateAlongsideAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
@end

