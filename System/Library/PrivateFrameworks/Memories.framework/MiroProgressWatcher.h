/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MiroProgressWatcher : NSObject {

	float _progress;
	/*^block*/id _progressHandler;
	id _observedObject;

}

@property (nonatomic,copy) id progressHandler;               //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) float progress;                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) id observedObject;              //@synthesize observedObject=_observedObject - In the implementation block
-(void)dealloc;
-(void)setProgressHandler:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)progressHandler;
-(float)progress;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)observedObject;
-(id)initWithObservedObject:(id)arg1 ;
-(void)setObservedObject:(id)arg1 ;
@end
