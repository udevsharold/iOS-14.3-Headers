/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView;

@interface SBViewSnapshotProvider : NSObject {

	UIView* _view;
	long long _orientation;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)snapshot;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)snapshotAsynchronously:(BOOL)arg1 withImageBlock:(/*^block*/id)arg2 ;
-(id)initWithView:(id)arg1 orientation:(long long)arg2 ;
-(void)snapshotWithImageBlock:(/*^block*/id)arg1 ;
@end

