/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBApplicationSceneEntityDestructionIntent : NSObject {

	BOOL _shouldRemoveFromHistory;
	unsigned long long _animation;

}

@property (assign,nonatomic) unsigned long long animation;              //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) BOOL shouldRemoveFromHistory;              //@synthesize shouldRemoveFromHistory=_shouldRemoveFromHistory - In the implementation block
-(unsigned long long)animation;
-(void)setAnimation:(unsigned long long)arg1 ;
-(BOOL)shouldRemoveFromHistory;
-(void)setShouldRemoveFromHistory:(BOOL)arg1 ;
@end

