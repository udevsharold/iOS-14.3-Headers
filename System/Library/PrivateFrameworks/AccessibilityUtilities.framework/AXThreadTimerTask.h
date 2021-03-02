/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXThreadTimerTask : NSObject {

	BOOL cancel;
	BOOL finished;
	BOOL active;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                       //@synthesize block=_block - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancel; 
@property (assign,getter=isFinished,nonatomic) BOOL finished; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(void)setFinished:(BOOL)arg1 ;
-(void)run;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isCancelled;
-(id)block;
-(BOOL)isActive;
-(void)setCancel:(BOOL)arg1 ;
-(void)runAfterDelay:(float)arg1 ;
-(void)setBlock:(id)arg1 ;
@end
